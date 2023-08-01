// Member function of one class is friend function of another class.

#include<iostream>
using namespace std;

class A{
    public:
    void func(){ // member function

    }
    void foo(){ // member function

    }
};

class B{

    friend class A; // Equivalent to below friend functions that is all the member functions in class A are friend functions of class B
    friend void A::func(); // friend function
    friend void A::foo(); //friend function
};

void func(){

}