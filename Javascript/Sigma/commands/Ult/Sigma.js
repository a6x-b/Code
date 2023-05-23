// Dependincies
const { SlashCommandBuilder } = require('discord.js');
const { joinVoiceChannel } = require('@discordjs/voice');
const { createAudioResource } = require('@discordjs/voice');
// const { createAudioPlayer, NoSubscriberBehavior } = require('@discordjs/voice');
const Shuffles = 3;
var Global_Vars = require('../../Global_Vars.js');
const ROLE = 'Sigma'

module.exports = {
	data: new SlashCommandBuilder()
		.setName('sigma')
		.setDescription('Use Gravitic Flux'),
	async execute(interaction) {
        // Init
        const voiceChannels = [];
        const ultChannels = [];
        interaction.guild.channels.cache.each(channel => {
            if (channel.type == 2) {
                voiceChannels.push(channel); }});
                
                // Ultimate Activated & Checking before running the ult
                console.log(`[INFO] ${interaction.user.tag} pressed Q in ${interaction.channel.name}!!`);
                if (interaction.member.roles.cache.some((r) => r.name === ROLE)) {
                    if (interaction.member.voice.channel) {
                        console.log(`[INFO] ${interaction.user.tag} is in ${interaction.member.voice.channel?.name}`);
                        if (Global_Vars.Ult_Bar >= 100) {
                            while (ultChannels.length + 1 < Shuffles | (ultChannels.length + 1 === Shuffles & ultChannels[ultChannels.length-1] === interaction.member.voice.channel)) {
                                // return Math.floor(Math.random() * (max - min) + min);}
                                let index = Math.floor(Math.random() * voiceChannels.length);
                                // console.log(`Index: ${index}`);
                                // console.log(`Length: ${ultChannels.length}`);
                                if (ultChannels.length === 0 & voiceChannels[index].id === interaction.member.voice.channel.id) {
                                    continue;
                                //} else if (ultChannels.length + 1 === Shuffles & ultChannels[ultChannels.length-1].id === interaction.member.voice.channel.id) {
                                } else {
                                    if (ultChannels[ultChannels.length - 1] === voiceChannels[index])
                                        continue;
                                }
                                ultChannels.push(voiceChannels[index]);
                                // console.log(`[DEV] Added ${voiceChannels[index].name} to ultChannels.`);
                            }
                            ultChannels.push(interaction.member.voice.channel);
                            console.log('[INFO] Gravitic Flux is being used!!');
                            // Joining VC
                            const connection = joinVoiceChannel({
                                channelId: interaction.member.voice.channel.id,
                                guildId: interaction.member.voice.channel.guild.id,
                                adapterCreator: interaction.member.voice.channel.guild.voiceAdapterCreator,
                            });
                            connection.subscribe(audioPlayer);
                            // IDK, Code I found for checking the connection.
                            async () => {
                                try {
                                    return connection;
                                } catch (error) {
                                    console.error("Couldn't make a stable connection");
                                    connection.destroy();
                                    console.error(error);
                                }
                            }
                            
                            // Playing Ultimate Voice Line
                            try {
                                sigmaVL = createAudioResource('./audio/TUSFM.mp3');
                                audioPlayer.play(sigmaVL);
                                setTimeout( () => {audioPlayer.stop()}, 5000);
                            } catch (error) {
                                await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
                                console.error(error);
                                console.error("[ERROR] Didn't play SFX");
                            }
                            // Replying to the interaction.
                            await interaction.reply({ content:'What is that melody?!', ephemeral: false });
                            
                            // This is where the fun part begins...
                            setTimeout( () => {
                                let interval = 2500;
                                ultChannels.forEach(function(channel, index) {
                                    setTimeout(() => {
                                        let VCmembers = interaction.member.voice.channel?.members;
                                        VCmembers.forEach((member) => {
                                            if (!member.user.bot) {
                                                if (member != interaction.member)
                                                    member.voice.setChannel(channel.id);
                                                // console.log(`[INFO] Moved ${member.user.tag} to ${channel.name}`);
                                            }
                                        })
                                    }, index * interval);
                                });
                                // Reseting.
                                Global_Vars.Ult_Bar = 0;
                                Global_Vars.Ult_Notified = false;
                                setTimeout(() => {connection.destroy();},ultChannels.length * interval + 1000);
                            }, 5000)
                            
                            
                            // */
                            // IF Ult isn't ready.
                        } else if (Global_Vars.Ult_Bar >= 90) {
                            console.log(`[INFO] Gravitux Flux is almost ready! (${Global_Vars.Ult_Bar})%`);
                            await interaction.reply({ content: `Gravitux Flux is almost ready (${Global_Vars.Ult_Bar})%`, ephemeral: true });
                        } else {
                    console.log(`[WARN] Gravitic Flux is not ready yet. (${Global_Vars.Ult_Bar})%`);
                    await interaction.reply({ content: `Gravitux Flux is charging (${Global_Vars.Ult_Bar})%`, ephemeral: true });
                }

            // IF user isn't in a VC
            } else {
                console.log(`[WARN] ${interaction.user.tag} isn't in a voice channel`);
                await interaction.reply({content: 'You must be in a Voice Channel first.', ephemeral: true});
            }
		}

        // IF user doesn't have the role.
		else {
            await interaction.reply({ content:`You can't stop time because you don't have ${ROLE} role.`, ephemeral: true });
			console.log(`[INFO] ${interaction.user.tag} doesn't have ${ROLE}.`);
		}
	},
};