const { Events } = require('discord.js');
const { client } = require('../index.js');


module.exports = {
	name: Events.MessageCreate,
	async execute(message) {
		if (message.content === 'retarded') {
            message.reply('no you');
            return;
        }

		if (message.content.toLowerCase().includes('go sleep')) {
			console.log(`[INFO] asked to log out by ${message.author.tag}`);
			message.reply('gn :sleeping:').then(() => {setTimeout(() => client.destroy(), 1000);});
		}
		if (message.content.includes('سيقما')| message.content.includes('سيجما')) {
			message.reply("Here's Sigma Theme (سقم حالي) \n https://youtu.be/JdbcecVG0x0")
		}
	},
};