const { SlashCommandBuilder } = require('discord.js');

let { Time_STOP } = require('../../Global_Vars.js');

module.exports = {
	data: new SlashCommandBuilder()
		.setName('asktime')
		.setDescription('ask "The World" how long can he lasts'),
	async execute(interaction) {
		console.log(`[INFO] ${interaction.user.tag} asked for time duration`);
		await interaction.reply({ content: `I can stop time for ${Time_STOP} seconds :blush:`, ephemeral: true });
	},
};
// ephemeral: true in interaction.reply() to make it hidden