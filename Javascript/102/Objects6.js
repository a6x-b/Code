let user = {
    
}
function logger(name,last,age) {
    console.log(`Hello ${this.name} ${this.last} your age is ${this.age}`)
    return
};
logger.call(user,this.name,this.last,this.age)

let obj = {
    function1() {return console.log('First Function.');},
    
    function2: () => {
        return console.log('Second Function');
    },

    function3: function(){
        return console.log('Third Function.');
    }
}
obj.function1()
obj.function2()
obj.function3()