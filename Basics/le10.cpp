// Overloading of insertion and extraction operator using friend function

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
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &dout, Complex c){
    dout<<"\na - "<<c.a<<" b - "<<c.b<<endl;
    return dout;
}

istream& operator>>(istream &din, Complex &c){
    din>>c.a>>c.b;
    return din;
}
int main(){
    Complex c1,c2,c3;
    cout<<"Enter a complex number ";
    cin>>c1; //cin.operator>>(c1); using member function
    cout<<"You entered ";
    cout<<c1; //opertor<<(cout,c1); using friend function
}