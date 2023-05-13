const { SlashCommandBuilder } = require('discord.js');
let { TimeStopped, Time_STOP } = require('../../Global_Vars.js');

module.exports = {
	data: new SlashCommandBuilder()
		.setName('zawarudo')
		.setDescription('Stops time'),
	async execute(interaction) {
		if (interaction.member.roles.cache.some((r) => r.name === "The World")) {
			if (TimeStopped) {
				console.error("[ERROR] blud tried to stop time, while it's already is.");
				return;
			}
			console.log('[INFO] Someone stopped time!!');
			await interaction.reply('https://tenor.com/view/diego-brando-diego-alternate-the-world-za-warudo-gif-17597363');
			TimeStopped = true;
			await interaction.channel.send("Time has stopped.").then((msg) => {setTimeout(() => msg.delete(), 3500);});
			//await interaction.reply('Za Warudo!');


			//Time Resuming
			interaction.channel.permissionOverwrites.create(interaction.channel.guild.roles.everyone, { SendMessages: false });
			setTimeout(function() {
				interaction.channel.send("Time will resume.");
				TimeStopped = false;
				interaction.channel.permissionOverwrites.create(interaction.channel.guild.roles.everyone, { SendMessages: true });
			}, Time_STOP * 1000);
		}
	},
};