// Type Conversion

#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(){

    }
    Complex(int k){
        a=k; b=0;
    }
    void set_data(int x, int  y){
        a=x; b=y;
    }
    void show_data(){
        cout<<"a - "<<a<<" b -"<<b<<endl;
    }


    // operator int(){ // Casting/Conversion operator 
    //     return a;
    // }
    template <class x> operator x(){
        return a;
    }
};

int main(){
    int a=4;
    float b;
    b=a; // automatic type conversion or implicit conversion (conversion between primitve types)
    Complex c1,c2;
    int x=5;
    c1=x; // primitve type to Class type (constructor call has happened)
    c1.show_data();

    c2.set_data(3,4);
    x=c2; // Class type to primitive type (x=c2.operator int();)
    cout<<x<<endl;
}