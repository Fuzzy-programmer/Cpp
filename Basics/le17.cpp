// Method overriding and Method hiding

#include<iostream>
using namespace std;

class A{
    public:
    void f1(){

    }
    void f2(){

    }
};

class B{
    public:
    void f1(){ } // Method overriding
    void f2(int x){ } // Method hiding
};

int main(){
    B obj;
    obj.f1(); //B clss name of fun match and executes it.
    // obj.f2(); // B clss name of fun match and raises error for not matching the arguments passed.
    obj.f2(4); // B clss name of fun match and executes it.
}