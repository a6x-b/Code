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
			message.reply('OK, gn :sleeping:').then(() => {setTimeout(() => client.destroy(), 1000);});
		}
	},
};