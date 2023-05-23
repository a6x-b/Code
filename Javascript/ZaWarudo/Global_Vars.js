// const options = require('./commands/stando/options');
const options = require('./options.json');
const fs = require('node:fs');
// console.log(settings);
global.Time_STOP = options.Time_STOP;
// let TimeStopped = false;
global.allChannels = options.allChannels;

const saveSettings = () => {
    // console.log(fs.readFile('./options.json'));
        // console.log(this.Time_STOP);
        fs.writeFile("options.json", `{ "Time_STOP": ${this.Time_STOP}, "allChannels": ${this.allChannels} } `, {
            encoding: "utf8",
            flag: "w",
            mode: 0o666
        },
        (err) => {
        if (err)
            console.log(err);
        else {
        // console.log("File written successfully\n");
        // console.log("The written has the following contents:");
        // console.log(fs.readFileSync("options.json", "utf8"));
    }
});
    // console.log(fs.readFile('./options.json'));
}
exports.saveSettings = saveSettings;//*/
exports.Time_STOP = Time_STOP;
exports.TimeStopped = false;
exports.allChannels = allChannels;

// module.exports = { Time_STOP: Time_STOP, TimeStopped: TimeStopped, allChannels: allChannels };