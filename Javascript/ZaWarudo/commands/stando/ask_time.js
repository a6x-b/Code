const { SlashCommandBuilder } = require('discord.js');

let Global_Vars = require('../../Global_Vars.js');

module.exports = {
	data: new SlashCommandBuilder()
		.setName('asktime')
		.setDescription('ask "The World" how long can he lasts'),
	async execute(interaction) {
		console.log(`[INFO] ${interaction.user.tag} asked for time duration (${Global_Vars.Time_STOP} seconds)`);
		await interaction.reply({ content: `I can stop time for ${Global_Vars.Time_STOP} seconds at most :hourglass:`, ephemeral: true });
	},
};
// ephemeral: true in interaction.reply() to make it hidden