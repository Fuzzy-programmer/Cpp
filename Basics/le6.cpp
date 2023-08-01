// Operator Overloading

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
    Complex operator+(Complex c){  // Operator overloading
        Complex temp;
        temp.a= a+c.a;
        temp.b= b+c.b;
        return temp;
    }
    Complex operator-(){ // Unary operator overloading
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};

class Integer{
    int x;
    public:
    void set_data(int a){
        x=a;
    }
    void showdata(){
        cout<<"x = "<<x<<endl;
    }
    Integer operator++(){ // pre-increment operator
        Integer temp;
        temp.x=++x;
        return temp;
    }
    Integer operator++(int){ // post-increment operator
        Integer i;
        i.x=x++;
        return i;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.set_data(5,6);
    c2.set_data(4,4);
    c3=c1+c2; //c3=c1.operator+(c2);
    c2=c1.operator-(); // c2=-c1;
    c2.show_data();
    c3.show_data();

    Integer i1,i2;
    i1.set_data(5);
    i2.set_data(6);
    i2=++i1;
    i1++;
    i1.showdata();
    i2.showdata();
}