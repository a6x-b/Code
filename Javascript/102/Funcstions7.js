/* 
Arrow functions

1. let myfunc = (parameter) => {statement/expression};

2. (parameter) => expression;

3.(parameter) => {expression/statment
    expression/statment
expression/statment};

IFFEs: Immediatly Invoked Function Expression
*/
(function(name) {
    console.log(`Name is ${name}`);
}
)('Abdullah\n');

function Math(Operation, First, Second) {
    if (First == undefined || Second == undefined) {
        return console.log('Sorry, Wrong input');
    } else {
        if (Operation == 'Area') {
            return console.log(`Area = ${First*Second}`)
        } else if (Operation == 'Perimeter') {
            return console.log(`Perimeter = ${(First+Second)*2}`);
        }else{
            return console.log('Operation not available');
        }
    }
        
}
Math('Area',7);

Math('Area',7,3);
Math('sus',6,9)


let Text_Printer = (name='Abdullah') => {console.log(name)};
Text_Printer();
Text_Printer('Hey!');