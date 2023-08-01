// Friend function

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setData(int x, int y){
            a=x; b=y;
        }
        void showData(){
            cout<<"a - "<<a<<"b - "<<b<<endl;
        }
        friend void func(Complex);
};

void func(Complex c){
    cout<<"Sum is "<<c.a+c.b<<endl;
}
int main(){
    Complex c1;
    c1.setData(6,7);
    func(c1);
}