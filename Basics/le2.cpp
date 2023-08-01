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
        cout<<"a - "<<a<<" b -"<<b<<endl;
    }
    Complex add(Complex c){  //method for adding two complex numbers
        Complex temp;
        temp.a= a+c.a;
        temp.b= b+c.b;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.set_data(5,6);
    c2.set_data(4,4);
    c3=c1.add(c2);
    c3.show_data();
}