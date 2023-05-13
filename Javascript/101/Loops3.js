for (let i = 0;i < 10;i++) {
    console.log('Hello',i+1);
}
let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
for (num of numbers ) {
    if (num == 5) {
        continue
    }
    console.log(num)
}