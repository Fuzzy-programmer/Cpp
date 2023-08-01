// Virtual Destructor

#include<iostream>
using namespace std;

class Base {
public:
    virtual ~Base() { // late binding happens
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Calls the appropriate destructor (Derived destructor) in late binding by using virutal destructor in parent class

    return 0;
}