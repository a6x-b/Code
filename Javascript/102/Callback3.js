function sum(First, Second) {
    return First + Second
}
function sub(First, Second) {
    return First - Second
}
function multiply(First, Second) {
    return First * Second
}
function division(First, Second) {
    return First / Second
}

function operator(st, nd, operation) {
    return `[:{${operation(st,nd)}}:]`
}
console.log(operator(69,10,sum))
const func = (/*Parameters*/ ) => {/*actions*/}; //arrow function