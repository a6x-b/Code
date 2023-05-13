let numbers = [69,40,20,6,82,97];
let colors = ['green','white','yellow','white'];
console.log(numbers, colors);
//Foreach//
numbers.forEach(Number => {
    console.log(Number);
});
//some and every//
let nomb = 42;
console.log(`The fact that every number is ${nomb} is ${ numbers.every(function (Number){nomb 
    return Number == nomb })}`);

console.log(`The fact that some numbers are greater than ${nomb} is ${numbers.some(function (Number){
    let nomb = 42
    return Number > nomb, nomb})}`)
//index//
let color = 'yellow';
let color2 = 'white';
console.log(`The fact that colors array includes the color ${color} is ${colors.includes(color)}`);
console.log(`The index of the color ${color} is ${colors.indexOf(color)}`);
console.log(`The index of the color ${color2} is ${colors.indexOf(color2)}`);
console.log(`The last index of the color ${color2} is ${colors.lastIndexOf(color2)}`);
console.log(`colors.findindex is for objects (non-primitive data types)`);
// primitive data typess are string, number, bigint, boolean, undefined, symbol, and null
//also array.find() is useless
console.log(`The even numbers in the array are ${numbers.filter(function(number) {
    return number % 2 === 0;
})}`);
console.log(`merging both arrays will be ${numbers.concat(colors)}\n\n`)
//array.slice() will return the specfied slice from the array /array = pie
numbers.splice(1,1,420);
console.log(`HAHAHA! I REPLACED 40 WITH 420!! LOOK!! \n${numbers}`);
colors.sort();
numbers.sort();
console.log(`array.sort() sorts numbers from lowest the highest, and strings a-z for example: \nNumbers: ${numbers} \nColors: ${colors}`);;
strcol = colors.join('--');
console.log(`array.join combines all elements put them in one string and you can change spacing. \n${strcol}`);
reverse_number = numbers.reverse()
console.log(`array.reverse() rearranges the elements end to start \n${reverse_number}--btw this is reversed`);
mappedarr = numbers.map(function (element) {
    return element * 2});
console.log(`Well .map is quite useful, it apply a function to each element of the array like the next one,\n
Before: ${numbers}\nAfter: ${mappedarr}`);
mynamerr = 'abdullah atyah ali alzhrani'
console.log(`.split() splites the string into elements each time it passes specific charater`);
console.log(`${mynamerr} This is a string rn`);
mynamerr = mynamerr.split(' ');
console.log(`After splitting \n${mynamerr}`);