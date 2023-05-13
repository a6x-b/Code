class Car {
    static carscounter = 0
    constructor(model, year,company){
        this.manufacturer = company;
        this.model = model;
        this.year = year;
        Car.increase_Car()
        console.log(`Your ${this.model} is registered.`);
    }
    static increase_Car() {
        Car.carscounter++
    }
    ping() {
        console.log(`Pinging your ${this.model}...`);
        console.log(`Your ${this.model} is in Al Mindak.`);};
    remote_start(distance) {
        if (distance < 100) {
            console.log(`starting your ${this.model}...`);
            console.log(`Your ${this.manufacturer +' '+ this.model} is ready to drive!`);
        } else {
            console.log(`Sorry, Please move ${distance-100}m closer to the car.`);
        }
    };
};
mycar = new Car('Model 3',2021,'Tesla');
dadcar = new Car('Patrol',2016,'Nissan');
dadcar.remote_start(10);
console.log(Car.carscounter);