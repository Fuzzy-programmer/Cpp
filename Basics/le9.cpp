// Operator overloading using Friend Function

#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void set_data(int x, int  y){
        a=x; b=y;
    }
    void show_data(){
        cout<<"a - "<<a<<" b - "<<b<<endl;
    }
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex);
};

Complex operator+(Complex X, Complex Y){  // Operator overloading using friend function 
        Complex temp;
        temp.a= X.a+Y.a;
        temp.b= X.b+Y.b;
        return temp;
}
Complex operator-(Complex x){ // Unary operator overloading using friend function
        Complex temp;
        temp.a=-x.a;
        temp.b=-x.b;
        return temp;
}
int main(){
    Complex c1,c2,c3;
    c1.set_data(5,6);
    c2.set_data(4,4);
    c3=c1+c2; //c3=operator+(c1,c2);
    c1=-c3; // c1=operator-(c3);        Caller object becomes as an argument while using operator overloading through friend function.
    c1.show_data();
    c2.show_data();
    c3.show_data();
}