const { SlashCommandBuilder } = require('discord.js');
const { createAudioResource } = require('@discordjs/voice');
const { joinVoiceChannel } = require('@discordjs/voice');
const { VoiceConnectionStatus } = require('@discordjs/voice');
let CD = false;

module.exports = {
	data: new SlashCommandBuilder()
		.setName('zawarudo')
		.setDescription('Stops time')
		.setDMPermission(false),

	async execute(interaction) {
		// INFO LOG
		console.log(`[INFO] ${interaction.user.tag} is stopping time in ${interaction.channel.name}!!`);
		if (CD) {
			console.log(`[WARN] ${interaction.user.tag} can't stop time while he's in cooldown`);
			return await interaction.reply({ content: `You are in cooldown. You can't stop time Yet.`, ephemeral: true });
		}

		// Init Variables
		await interaction.guild.members.fetch();
		const standUserID = '813285635300261929'; // Rhys#7334 Snowflake
		const worldInvader = '401872224895893514' // A6X#5515 Snowflake
		const A6X = interaction.guild.members.cache.find(member => member.id === standUserID);
		const StandUser = interaction.guild.members.cache.find(member => member.id === standUserID);
		if (!StandUser) {
			console.log('[ERROR] Stand User was not found!');
			return;
		}
		if (!A6X) {
			console.log('[WARN] A6X was not found!');
		}
		if (!worldInvader) console.log('[WARN] the "World Invader" was not found');
		if (interaction.member.id === StandUser.id | interaction.member.id === worldInvader) {
			if (TimeStopped) {
				console.error(`[WARN] blud named ${interaction.user.tag} tried to stop time, while it's already is.`)
				await interaction.reply({ content: "Time is still stopped, nigga :blush:.", ephemeral: true });
				return;
			}
			console.log('[INFO] Stopping Time!');
			if (character === 'Diego')
				await interaction.reply({ content: 'https://tenor.com/view/diego-brando-diego-alternate-the-world-za-warudo-gif-17597363', ephemeral: false });
			else if (character === 'DIO')
				await interaction.reply({ content: 'https://tenor.com/view/dio-the-world-appear-the-world-jojo-part3-dio-the-world-gif-18932741', ephemeral: false });

			TimeStopped = true;

			// Make sure that setting every permission to false doesn't affect the stand user
			// Channels Overwrites map
			const Channels_OWs = new Map();

			// Checks if Single or All Channels then stores channel(s) OW into Channels_OW
			if (allChannels) {
				interaction.guild.channels.cache.forEach((channel) => {
					if ((channel.isTextBased() && !channel.permissionsLocked) || channel.type === 4) {
						Channels_OWs.set(channel.id, channel.permissionOverwrites.cache.clone())
						channel.permissionOverwrites.cache.forEach((permission) => {
						if (permission)
							channel.permissionOverwrites.delete(permission.id, 'Time Stopped')
						});
						channel.permissionOverwrites.create(channel.guild.roles.everyone, { ViewChannel: false, SendMessages: false, ManageChannels: false });
						channel.permissionOverwrites.create(StandUser, { SendMessages: true, ViewChannel: true });
						channel.permissionOverwrites.create(worldInvader, { SendMessages: false, ViewChannel: true });
					}
				});
			} else {
				Channels_OWs.set(interaction.channel.id, interaction.channel.permissionOverwrites.cache.clone())
				interaction.channel.permissionOverwrites.cache.forEach((permission) => {
					if (permission)
						interaction.channel.permissionOverwrites.delete(permission.id, 'Time Stopped')
				});
				setTimeout(() => {
					try {
						interaction.channel.permissionOverwrites.create(interaction.channel.guild.roles.everyone, { ViewChannel: false, SendMessages: false, ManageChannels: false });
						interaction.channel.permissionOverwrites.create(StandUser, { SendMessages: true, ViewChannel: true });
						interaction.channel.permissionOverwrites.create(worldInvader, { SendMessages: false, ViewChannel: true });
					} catch (error) { console.error(error); }
				}, 500);
			}

			// Joining VC
			//if (interaction.member.voice.channel) {
			try {
				global.connection = joinVoiceChannel({
					channelId: interaction.member.voice?.channel?.id,
					guildId: interaction.member.voice?.channel?.guild.id,
					adapterCreator: interaction.member.voice?.channel?.guild.voiceAdapterCreator,
				});
				} catch (error) {
					global.connection = undefined;
				}
				
				if (connection) {
					connection.subscribe(audioPlayer);
					connection.on(VoiceConnectionStatus.Ready, () => {
						TS = createAudioResource(`./audio/${character}/ZaWarudoSFX.mp3`);
						audioPlayer.play(TS);
					});
				} else {
					TS = createAudioResource(`./audio/${character}/ZaWarudoSFX.mp3`);
					audioPlayer.play(TS);
				}

			//}
			if (allChannels) {
				interaction.guild.channels.cache.each(channel => {
					if (channel.isVoiceBased()) {
						const members = channel.members;
						members.forEach(member => {
							if (!member.user.bot) {
								if (member.id != standUserID) {
									member.voice.setMute(true);
									if (member.id != worldInvader) {
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
							if (member != StandUser) {
								member.voice.setMute(true);
								if (!member.id === worldInvader) {
									member.voice.setDeaf(true)
								}
							}
						}
					})
				}
			}
			console.log('[INFO] Time has stopped!!');

			await interaction.channel.send("Za Warudo!").then((msg) => { setTimeout(() => msg.delete(), 3500); });

			//Time Resuming
			
			//audioPlayer.on(AudioPlayerStatus.Idle, () => {
			setTimeout(() => {
				console.log('[INFO] Time Will resume');
				// Playing Time Resume Sound
				try {
					TR = createAudioResource(`./audio/${character}/ResumeSFX.mp3`);
					audioPlayer.play(TR);
					setTimeout(() => { audioPlayer.stop(); if (connection) connection.destroy();}, 3500);
				} catch (error) {
					// await interaction.reply({content:'There was a problem in playing the audio.',ephemeral:true})
					console.error(error);
					console.error("[ERROR] Didn't play Time Resume audio");
				}
				interaction.channel.send("Time will move again.").then((msg) => { setTimeout(() => msg.delete(), 2000); });
				// Resetting Variable
				TimeStopped = false;
				Channels_OWs.forEach((Cache, ID) => {
					const Channel = interaction.guild.channels.cache.find(channel => channel.id === ID);
					Channel.permissionOverwrites.set(Cache);
				});
				/*if (interaction.member.voice.channel) {
					setTimeout(() => {
						connection.destroy();
					}, 3000);
				}*/
				const members = interaction.member.voice.channel?.members;
				if (members) {
					members.forEach(member => {
						if (!member.user.bot) {
							if (member.id != standUserID) {
								member.voice.setMute(false);
								if (member.id != worldInvader) {
									member.voice.setDeaf(false)
								}
							}
						}
					})
				}
				CD = true;
			}, Duration * 1000);
			//})
			
		} else {
			await interaction.reply({ content: "You can't stop time because you are not my user.", ephemeral: true });
			console.log(`[INFO] ${interaction.user.tag} isn't the user.`);
		}
		setTimeout(() => {
			CD = false;
		}, 60000);
	},
};