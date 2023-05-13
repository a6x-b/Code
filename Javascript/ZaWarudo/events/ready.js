const { Events } = require('discord.js');
const { deployCommands } = require('../deploy_commands.js');

module.exports = {
	name: Events.ClientReady,
	once: true,
	execute(client) {
		console.log(`[INFO] Logged in as ${client.user.tag}`);
		console.log('[INFO] Running "deploy_commands.js"');
		deployCommands();
	},
};