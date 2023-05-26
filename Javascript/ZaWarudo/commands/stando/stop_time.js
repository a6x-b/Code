const { SlashCommandBuilder } = require('discord.js');
let Global_Vars = require('../../Global_Vars.js');
const { createAudioResource } = require('@discordjs/voice');
const { joinVoiceChannel } = require('@discordjs/voice');
const channels = [];

module.exports = {
	data: new SlashCommandBuilder()
		.setName('zawarudo')
		.setDescription('Stops time')
		.setDMPermission(false),

	async execute(interaction) {
		// INFO LOG
		console.log(`[INFO] ${interaction.user.tag} is stopping time in ${interaction.channel.name}!!`);

		const worldInvader = interaction.channel.guild.roles.cache.find(r => r.name === 'World Invader');
		const ZaWarudo = interaction.channel.guild.roles.cache.find(r => r.name === 'The World');
		if (interaction.member.roles.cache.some((r) => r.name === "The World")) {
			if (Global_Vars.TimeStopped) {
				console.error("[WARN] blud tried to stop time, while it's already is.");
				await interaction.reply({ content:"Time is still stopped, nigga :blush:.", ephemeral: true });
				return;
			}
			console.log('[INFO] Stopping TIME!!');
			await interaction.reply({content:'https://tenor.com/view/diego-brando-diego-alternate-the-world-za-warudo-gif-17597363', ephemeral: true});
			Global_Vars.TimeStopped = true;
			// console.log(`[DEV] allChannels = ${Global_Vars.allChannels}`);
			if (Global_Vars.allChannels) {
				
				interaction.guild.channels.cache.forEach((channel) => {
					if (channel.isTextBased())
					channels.push(channel);
					channel.permissionOverwrites.create(channel.guild.roles.everyone, { ViewChannel: false });
					channel.permissionOverwrites.create(worldInvader, { SendMessages: false, ViewChannel: true });
					channel.permissionOverwrites.create(ZaWarudo, { SendMessages: true, ViewChannel: true });
				});
			} else {
				interaction.channel.permissionOverwrites.create(ZaWarudo, { SendMessages: true, ViewChannel: true });
				interaction.channel.permissionOverwrites.create(interaction.channel.guild.roles.everyone, { ViewChannel: false });
				interaction.channel.permissionOverwrites.create(worldInvader, { SendMessages: false, ViewChannel: true });
			}
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
				//*/
				try {
					TS = createAudioResource('./audio/ZaWarudoDiego.mp3');
					audioPlayer.play(TS);
					setTimeout( () => {audioPlayer.pause()}, 3000);
				} catch (error) {
					// await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
					console.error(error);
					console.error("[ERROR] Didn't play audio");
				}
			}
			if (Global_Vars.allChannels) {
				interaction.guild.channels.cache.each(channel => {
					if (channel.type === 2) {
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
							if (!member.roles.cache.some((r) => r.name === "The World")) {
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
				
				await interaction.channel.send("Time has stopped.").then((msg) => {setTimeout(() => msg.delete(), 3500);});
				
				//Time Resuming
				setTimeout(() => {
					console.log('[INFO] Time Will resume');
					// Playing Time Resume Sound
					try {
						TR = createAudioResource('./audio/DiegoResume.mp3');
						audioPlayer.play(TR);
						setTimeout( () => {audioPlayer.stop()}, 2000);
					} catch (error) {
						// await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
						console.error(error);
						console.error("[ERROR] Didn't play audio");
					}
					interaction.channel.send("Time will resume.");
					// Resetting Variable
					Global_Vars.TimeStopped = false;
					
					// Checks if it's all channel or just one
					if (Global_Vars.allChannels) {
						channels.forEach((channel) => {
							channel.permissionOverwrites.create(channel.guild.roles.everyone, { ViewChannel: null });
							channel.permissionOverwrites.delete(worldInvader, 'Time Resumed');
							channel.permissionOverwrites.delete(ZaWarudo, 'Time Resumed');
						});
					} else {
						interaction.channel.permissionOverwrites.edit(interaction.channel.guild.roles.everyone, { ViewChannel: null });
						interaction.channel.permissionOverwrites.delete(worldInvader, 'Time Resumed');
						interaction.channel.permissionOverwrites.delete(ZaWarudo, 'Time Resumed');
					}
					if (interaction.member.voice.channel) {
						setTimeout(() => {
							connection.destroy();
						}, 2000);
					}
					if (members) {
						members.forEach(member => {
							if (!member.user.bot) {
								
								if (!member.roles.cache.some((r) => r.name === "The World")) {
									member.voice.setMute(false);
									if (!member.roles.cache.some((r) => r.name === "World Invader")) {
										member.voice.setDeaf(false)
									}
								}
							}
						})
					}
				}, Global_Vars.Time_STOP * 1000);
			}
			else {
				await interaction.reply({ content:"You can't stop time because you don't have The World.", ephemeral: true });
				console.log(`[INFO] ${interaction.user.tag} doesn't have The World.`);
		}
	},
};