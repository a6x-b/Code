const { SlashCommandBuilder } = require('discord.js');
const minStop = 5;
module.exports = {
    data: new SlashCommandBuilder()
	.setName('set')
	.setDescription('change settings')
	.addSubcommand(subcommand =>
		subcommand
        .setName('duration')
        .setDescription('Sets the duration of a time stop')
        .addIntegerOption(option => option.setName('seconds').setDescription('Time stop duration in seconds').setRequired(true)))
    .addSubcommand(subcommand =>
        subcommand
        .setName('channels')
        .setDescription('Select the channels to stop time in')
        .addStringOption(option => option.setName('option').setDescription('.')
        .setRequired(true)
            .addChoices(
                { name: 'All Text Channels', value: 'All Text Channels' },
                { name: 'Single Text Channel', value: 'A Single Text Channel' }
            )
        )
    )
    .addSubcommand(subcommand =>
        subcommand
        .setName('character')
        .setDescription('Select the character that will stop time')
        .addStringOption(option => option.setName('character').setDescription('Select the character that will stop time')
        .setRequired(true)
            .addChoices(
                { name: 'DIO', value: 'DIO' },
                { name: 'Diego Brando', value: 'Diego' }
            )
        )
    ),
    async execute(interaction) {
        const sub = interaction.options.getSubcommand('option');
        if (sub === 'duration') {
            const choice = interaction.options.getInteger('seconds');
            // console.log(`[DEV] choice = ${choice}`);
            // console.log(Duration);
            if (choice < minStop) {
                interaction.reply({content:`You can't set the duration to ${choice} second(s), it must be ${minStop} or above`, ephemeral: true });
                console.log(`[WARN] ${interaction.user.tag} tried to set duration less than ${minStop}`);
            }
            Duration = choice;
            interaction.reply({content:`The World now will stop time for ${choice} seconds`, ephemeral: true });
        } else if (sub === 'channels') {
            const choice = interaction.options.getString('option');
            if (choice === 'All Text Channels')
            {
                allChannels = true;
            } else {
                allChannels = false;
            }
            console.log(allChannels);
            
            interaction.reply({content:`The World now is set to stop time in ${choice}`, ephemeral: true });
            console.log(`[INFO] ${interaction.user.tag} set The World to stop time in ${choice}`);
        } else if (sub === 'character') {
            const choice = interaction.options.getString('character');
            
            character = choice
            if (choice === 'DIO')
                Duration = 10
            else if (choice === 'Diego')
                Duration = 5
            interaction.reply({content:`The World now is set to stop time in ${choice}`, ephemeral: true });
            console.log(`[INFO] ${interaction.user.tag} set The World to stop time as ${choice}`);
        }
        saveSettings()
    }
};