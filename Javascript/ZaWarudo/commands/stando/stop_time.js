const { SlashCommandBuilder } = require('discord.js');
let Global_Vars = require('../../Global_Vars.js');
const { createAudioResource } = require('@discordjs/voice');
const { joinVoiceChannel } = require('@discordjs/voice');
const { VoiceConnectionStatus } = require('@discordjs/voice');

module.exports = {
	data: new SlashCommandBuilder()
	.setName('zawarudo')
	.setDescription('Stops time')
	.setDMPermission(false),
	
	async execute(interaction) {
		// INFO LOG
		console.log(`[INFO] ${interaction.user.tag} is stopping time in ${interaction.channel.name}!!`);
		
		// Init Variables
		await interaction.guild.members.fetch();
		const Babe_ID = '813285635300261929'; // Rhys#7334 Snowflake
		const TextChannels = [];
		const worldInvader = '401872224895893514' // A6X#5515 Snowflake
		const StandUser = interaction.guild.members.cache.find(member => member.id === Babe_ID);
		if (!StandUser) {
			console.log('[ERROR] Stand User was not found!');
			return;
		}
		if (!worldInvader) console.log('[WARN] the role "World Invader" is not found');
		if (interaction.member.roles.cache.some((r) => r.name === "The World")) {
			if (Global_Vars.TimeStopped) {
				console.error("[WARN] blud tried to stop time, while it's already is.")
				await interaction.reply({ content:"Time is still stopped, nigga :blush:.", ephemeral: true });
				return;
			}
			console.log('[INFO] Stopping TIME!!');
			await interaction.reply({content:'https://tenor.com/view/diego-brando-diego-alternate-the-world-za-warudo-gif-17597363', ephemeral: false});
			Global_Vars.TimeStopped = true;

			// Make sure that setting every permission to false doesn't affect the stand user
			// Channels Overwrites map
			const Channels_OWs = new Map();
			
			// Checks if Single or All Channels then stores channel(s) OW into Channels_OW
			if (Global_Vars.allChannels) {
				interaction.guild.channels.cache.forEach((channel) => {
					if (channel.isTextBased()) {
						TextChannels.push(channel);
						Channels_OWs.set(channel.id, channel.permissionOverwrites.cache.clone())
					}
					channel.permissionOverwrites.cache.forEach((permission) => {
						if (permission)
							channel.permissionOverwrites.delete(permission.id, 'Time Stopped')
					});
					
				});
			} else {
				Channels_OWs.set(interaction.channel.id, interaction.channel.permissionOverwrites.cache.clone())
				interaction.channel.permissionOverwrites.cache.forEach((permission) => {
					if (permission)
						interaction.channel.permissionOverwrites.delete(permission.id, 'Time Stopped')
				});
			}
			interaction.channel.permissionOverwrites.create(StandUser, { SendMessages: true, ViewChannel: true });
			interaction.channel.permissionOverwrites.create(worldInvader, { SendMessages: false, ViewChannel: true });		

			// Joining VC
			if (interaction.member.voice.channel) {
				global.connection = joinVoiceChannel({
					channelId: interaction.member.voice.channel.id,
					guildId: interaction.member.voice.channel.guild.id,
					adapterCreator: interaction.member.voice.channel.guild.voiceAdapterCreator,
				});
				
				try {
					connection.subscribe(audioPlayer);
				} catch (error) {
					console.error(error);
				}
				
				connection.on(VoiceConnectionStatus.Ready, () => { 
					//*/
					try {
						TS = createAudioResource('./audio/ZaWarudoDiegoSFX.mp3');
						audioPlayer.play(TS);
						setTimeout( () => {audioPlayer.pause()}, 3000);
					} catch (error) {
						// await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
						console.error(error);
						console.error("[ERROR] Didn't play Time Stop audio");
					}
				});
			}
			if (Global_Vars.allChannels) {
				interaction.guild.channels.cache.each(channel => {
					if (channel.isVoiceBased()) {
						const members = channel.members;
						members.forEach(member => {
							if (!member.user.bot) {
								if (!member.roles.cache.some((r) => r.name === "The World")) {
									member.voice.setMute(true);
									if (!member.roles.cache.some((r) => r.name === "World Invader")) {
										member.voice.setDeaf(true)
									}
								}
							}
						})
					}
				})
			} else {
				const members = interaction.member.voice.channel?.members;
				if (members) {
					members.forEach(member => {
						if (!member.user.bot) {
							if (!StandUser) {
								member.voice.setMute(true);
								if (!member.roles.cache.some((r) => r.name === "World Invader")) {
									member.voice.setDeaf(true)
								}
							}
						}
					})
				}
			}
				console.log('[INFO] Time has stopped!!');
				
				await interaction.channel.send("Za Warudo!").then((msg) => {setTimeout(() => msg.delete(), 3500);});
				// await interaction.channel.send("Time has stopped.").then((msg) => {setTimeout(() => msg.delete(), 3500);});
				
				//Time Resuming
				setTimeout(() => {
					console.log('[INFO] Time Will resume');
					// Playing Time Resume Sound
					try {
						TR = createAudioResource('./audio/DiegoResumeSFX.mp3');
						audioPlayer.play(TR);
						setTimeout( () => {audioPlayer.stop()}, 2000);
					} catch (error) {
						// await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
						console.error(error);
						console.error("[ERROR] Didn't play Time Resume audio");
					}
					interaction.channel.send("Time will move again.").then((msg) => {setTimeout(() => msg.delete(), 3500);});
					// Resetting Variable
					Global_Vars.TimeStopped = false;
					
					Channels_OWs.forEach((Cache, ID) => {
						const Channel = interaction.guild.channels.cache.find(channel => channel.id === ID);
						Channel.permissionOverwrites.set(Cache);
					});

					if (interaction.member.voice.channel) {
						setTimeout(() => {
							connection.destroy();
						}, 2000);
					}
					const members = interaction.member.voice.channel?.members;
					if (members) {
						members.forEach(member => {
							if (!member.user.bot) {
								if (member.id != StandUser) {
									member.voice.setMute(false);
									if (member.id != worldInvader) {
										member.voice.setDeaf(false)
									}
								}
							}
						})
					}
				}, Global_Vars.Time_STOP * 1000);
			}
			else {
				await interaction.reply({ content:"You can't stop time because you are not my user.", ephemeral: true });
				console.log(`[INFO] ${interaction.user.tag} isn't the user.`);
		}
	},
};