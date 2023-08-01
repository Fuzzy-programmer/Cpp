// Method overriding and Method hiding

#include<iostream>
using namespace std;

class Car{
    public: 
        void shiftgear() {}
        void f2(){}
};

class SportsCar: public Car{
    public:
        void shifgear(){ } // Method overriding
        void f2(int x) { } // Method hiding
};

int main(){
    SportsCar obj; 
    obj.shifgear(); // SportsCar class method will be executed.
    // obj.f2(); error (early binding)
    obj.f2(5); // SportsCar class method.
}