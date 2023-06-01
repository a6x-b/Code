// const options = require('./commands/stando/options');
const options = require('./options.json');
const fs = require('node:fs');

global.Duration = options.Duration;
global.allChannels = options.allChannels;
global.character = options.character;
global.TimeStopped = false

global.saveSettings = () => {
    // console.log(fs.readFile('./options.json'));
        // console.log(this.Duration);
        fs.writeFile("options.json", `{ "Duration": ${Duration}, "allChannels": ${allChannels}, "character": "${character}" }`, {
            encoding: "utf8",
            flag: "w",
            mode: 0o666
        },
        (err) => {
        if (err)
            console.log(err);
});
}

// module.exports = { Duration: Duration, TimeStopped: TimeStopped, allChannels: allChannels };