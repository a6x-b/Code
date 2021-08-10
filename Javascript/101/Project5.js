function Show_book(Book_Pos) {
    if (Book_Pos == undefined) {
        console.log('Book not available')
        return;
    };
    console.log('Book ID: '+ Book_Pos[0])
    console.log('Book name: '+ Book_Pos[1])
    console.log('Book author: '+ Book_Pos[2])
    console.log('Book price: '+ Book_Pos[3])
    console.log('Book quantity: '+ Book_Pos[4])
};
function Book_search(search_key) {
    for (let i = 0; i < storage.length; i++) {
        for (let j = 0; j < 3; j++) {
            if (storage[i][j] == search_key) {
                return storage[i];
            };
        };
        if (i + 1 == storage.length) {
            return undefined;
        }
    };
};
let storage = [
    ['AAA', 'Start with why', 'Simon Sinek', 80.0, 13],
    ['AAB', 'But how do it know', 'J. Clark Scott', 59.9, 22],
    ['AAC', 'Clean Code', 'Robert Cecil Martin', 50.0, 5],
    ['AAD', 'Zero to One', 'Peter Thiel', 45.0,12],
    ['AAE', "You don't know JS", 'Kyle Simpson', 39.9, 9]
]

let search_key = 'AAE';
console.log('Searching for the with following information '+ search_key);
Show_book(Book_search(search_key));