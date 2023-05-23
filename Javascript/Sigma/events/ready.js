const { Events } = require('discord.js');
const { deployCommands } = require('../deploy_commands.js');
const { createAudioPlayer, NoSubscriberBehavior } = require('@discordjs/voice');

module.exports = {
	name: Events.ClientReady,
	once: true,
	execute(client) {
		console.log(`[INFO] Logged in as ${client.user.tag}`);
		client.user.setPresence({ activities: [{ name: 'with gravity' }], status: 'online' });
		console.log('[INFO] Running "deploy_commands.js"');
		deployCommands();
		global.audioPlayer = createAudioPlayer(/*{ behaviors:{noSubscriber: NoSubscriberBehavior.Stop }}*/);
		
	},
};