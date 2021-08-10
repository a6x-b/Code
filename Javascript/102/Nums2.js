const DEnombar = 69.420;
console.log("The number after ceilling = "+ Math.ceil(DEnombar));
console.log("The number after rounding (auto ceilling/flooring) = "+ Math.round(DEnombar));
console.log("The number after flooring = "+ Math.floor(DEnombar));
console.log("NOTE: if the value was negative, it will oppsite, e.g: flooring -10.5 is -11");
console.log("in another word, ceil and floor will swap their jobs");
console.log(Math.floor(-10.5));
//-------------------------------------------------------------------------------------------------------//
console.log("\n \nNow with the absolutely the best Math method: abs");
console.log("abs makes any number to positive, WHAT A METHOD?!!");
const SadNombar = -666.666;
console.log(`Let's take ${SadNombar} as an example:`);
console.log(`if we Math.abs(${SadNombar}) it will be ${Math.abs(SadNombar)}`);
//------------------------------------------------------------------------------------------------------//
console.log("That was a sad story :(\n");
console.log("So, let's get back to work, Oof! You forgot the office Password!!");
console.log("What's that? The password is minmum num multiplyed by the maximum one from the next list?");
const totallyrandom = [5,19,4,505];
console.log("Don't Worry, I got it!");
console.log("to get the minimum number we need to use Math.min(...List)");
console.log("to get the maximum number we need to use Math.max(...List)");
console.log(`our array is [${totallyrandom}], The maximum of it is: ${Math.max(...totallyrandom)},`);
console.log(`And the minimum of array is: ${Math.min(...totallyrandom)}`);
let [Mini, Max] = [Math.min(...totallyrandom), Math.max(...totallyrandom)];
console.log(`So if we multiply them it will be: ${(Mini * Max)}`);
console.log("Go Ahead, OPEN THE DOOR!!1!");
//------------------------------------------------------------------------------------------------------//
const Meowse = '5.5';
console.log(`WHAT AN IDIOT!! HE ASSIGNED ${Meowse} AS A STRING!! DO I HAVE TO DO IT BY MYSELF?!2!`);
console.log(`Ok, Let's make it a float then add 69.42 to it, First we use str.parsefloat()`);
const [Mause, Mouse] = [parseFloat(Meowse), parseInt(Meowse)];
console.log(`${Mause + 69.42}, Good it's working`);
console.log(`${Mouse + 69.42}, Excellent!!!`);
console.log(`Now for the useless part, there is method called Math.trunc it removes the .y from x.y`);
console.log(`Example: 69.42 with trunc is ${Math.trunc(69.42)}`); //oops i called frunc before but edited, Tesla anyone?
console.log("Also Number.isInteger() returns boolean value")
const Nomb = 5;
const IsInt = Number.isInteger(Nomb);
console.log(`Is ${Nomb} an Intger? The answer is ${IsInt}.`);