const { Events } = require('discord.js');
const { deployCommands } = require('../deployCommands.js');
const { client } = require('../index.js');
const { createAudioPlayer, NoSubscriberBehavior } = require('@discordjs/voice');

module.exports = {
	name: Events.ClientReady,
	once: true,
	execute() {
		console.log(`[INFO] Logged in as ${client.user.tag}`);
		console.log('[INFO] Running "deploy_commands.js"');
		deployCommands();
		client.user.setPresence({ activities: [{ name: 'with myself', url:'https://youtube.com' }], status: 'online' });
		console.log('[INFO] Setted RPC.');
		global.audioPlayer = createAudioPlayer({
			behaviors: NoSubscriberBehavior.Pause
		});
	},
};