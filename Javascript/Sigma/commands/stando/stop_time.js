const { SlashCommandBuilder } = require('discord.js');

module.exports = {
	data: new SlashCommandBuilder()
		.setName('zawarudo')
		.setDescription('stops time'),
	async execute(interaction) {
		await interaction.reply('Za Warudo!');
		/*
		//Condition
		if (message.author.bot) { return; }
		if (interaction === "How many seconds can you stop time?") {
			console.log(`Someone asked about my time stop (It's ${Time_STOP} seconds).`);
		interaction.reply(`I can stop time for ${Time_STOP} seconds. (^_^)`);
		return;
		}

		//Here is where the fun begins...
		if (message.member.roles.cache.some((r) => r.name === "The World")) {
			//Checks if time is already stopped.
			if (TimeStopped) {
				console.log("Blud tried to stop time while it's already is.");
				message.reply("Time is still stopped, nigga. :blush:");
				return;
				}
			//Checks if it's in the test channel
			if (message.channelId === "1104030945323003925") {
				console.log("Someone used their world!!");
				message.channel.send("https://tenor.com/view/diego-brando-diego-alternate-the-world-za-warudo-gif-17597363");
				TimeStopped = true;
				message.channel.send("Time has stopped.").then((msg) => {setTimeout(() => msg.delete(), 3500);});

				//Time Resuming
				message.channel.permissionOverwrites.create(message.channel.guild.roles.everyone, {SendMessages: false});
				setTimeout(function () {
					message.channel.send("Time will resume.");
					TimeStopped = false;
					message.channel.permissionOverwrites.create(message.channel.guild.roles.everyone, {SendMessages: true});
				}, Time_STOP * 1000);
			}
		}*/
		},
	};