const { Events } = require('discord.js');
var Global_Vars = require('../Global_Vars.js');
const genRate = 1;

module.exports = {
	name: Events.ClientReady,
    once: false,
	async execute() {
        console.log('[INFO] Started Generating Ult');
        while (true) {
            // setTimeout(function() {
                // console.log(Ult_Bar);
                await new Promise(r => setTimeout(r, 3920 / genRate));
                if (Global_Vars.Ult_Bar < 100) {
                    // console.log(`[INFO] Ultimate is now ${Global_Vars.Ult_Bar}%`);
                    Global_Vars.Ult_Bar = Global_Vars.Ult_Bar + 1;
                }
                if (Global_Vars.Ult_Bar >= 100 & !Global_Vars.Ult_Notified) {
                    // console.log(`[INFO] Ultimate is now Ready ${Global_Vars.Ult_Bar}%`);
                    Global_Vars.Ult_Notified = true;
                }
            // }, 1000);
        }
	},
};
