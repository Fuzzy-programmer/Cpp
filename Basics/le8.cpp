// Friend function

#include<iostream>
using namespace std;
class B;
class A{ //class members are defaultly private
    int a;
    friend void fun(A, B); //It is not member function so it cannot have public, protected, private
    public:
    void setData(int x){ // member function
        a=x;
    }
};
class B{
    int b;
    public:
    void setData(int x){ // member function
        b=x;
    }
    friend void fun(A, B); // non member function 
};

void fun(A o1, B o2){
    cout<<"sum is "<<o1.a+o2.b<<endl;
}

int main(){
    A obj1;
    B obj2;
    obj1.setData(8);
    obj2.setData(9);
    fun(obj1, obj2);
}