const { SlashCommandBuilder } = require('discord.js');
const Global_Vars = require('../../Global_Vars.js');
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
        //.addUserOption(option => option.setName('target').setDescription('The user'))
        /*.addSubcommand(subcommand =>
            subcommand
			.setName('server')
			.setDescription('Info about the server'))*/,
    async execute(interaction) {
        const sub = interaction.options.getSubcommand('option');
        if (sub === 'duration') {
            const choice = interaction.options.getInteger('seconds');
            // console.log(`[DEV] choice = ${choice}`);
            // console.log(Global_Vars.Time_STOP);
            if (choice < 5) {
                interaction.reply({content:`You can't set the duration to ${choice} second(s), it must be 5 or above`, ephemeral: true });
                console.log(`[WARN] ${interaction.user.tag} tried to set duration less than 5.`);
            }
            Global_Vars.Time_STOP = choice;
            // console.log(Global_Vars.Time_STOP);
            interaction.reply({content:`The World now will stop time for ${choice} seconds`, ephemeral: true });
        } else if (sub === 'channels') {
            const choice = interaction.options.getString('option');
            // console.log(choice);
            // console.log(Global_Vars.allChannels);
            if (choice === 'All Text Channels')
            {
                Global_Vars.allChannels = true;
            } else {
                Global_Vars.allChannels = false;
            }
            console.log(Global_Vars.allChannels);
            
            interaction.reply({content:`The World now is set to stop time in ${choice}`, ephemeral: true });
            console.log(`[INFO] ${interaction.user.tag} set The World to stop time in ${choice}`);
        }
        Global_Vars.saveSettings()
        // const number = interaction.options.getSubcommand('seconds');
    }
        };