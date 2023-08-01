// Constructors in Inheritance

#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int k){    // By default compiler adds the constructor
        a=k;
    }
    ~A(){

    }
};

class B: public A{
    int b;
    public:
    B(int x,int y):A(x){b=x;} // By default the compiler adds the constuctor and calls parent constructor
    ~B(){
        // After execconstructor and destructor inheritance in cpp puting child class destructor only the parent class destructor will be called and exectued which free's the resources occupied by the object
    }
};

int main(){
    B obj(2,3);
}