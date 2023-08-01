#include<iostream>
using namespace std;
struct Complex{
    private:
        int a,b; //By default struct members are public
    public:
        void set_data(int x, int  y){ //Methods can be used inside the struct in cpp
            a=x; b=y;
        }
        void show_data(){
            cout<<"a - "<<a<<" b -"<<b<<endl;
        }
};

class Comp{
    int a,b; //By default class members are private
    public:
        inline void setdata(int , int);
        void showdata() //Defaultly the functions declared in the class are inline 
        {cout<<"a - "<<a<<" b - "<<b<<endl;}
};

void Comp::setdata(int x,int y){
    a=x; b=y;
}

int main(){
    Complex c; //struct keyword is optional before tag name
    Comp b; // b is an object
    b.setdata(2,3);
    b.showdata();
    c.show_data();
}