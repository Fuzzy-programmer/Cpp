// Inheritance

class Car{
    int gear;
    public:
        void incrementGear(){
            if(gear<5)
            gear++;
        }
};

class SportsCar: public /*Visibility_Mode*/ Car{ // By default Visibility mode is private
    
};

// Visibility mode indicates where the inherited members of the parent class 
// should be placed under the public/protected/private of the child class 
// which will be accessable for the users of child class.