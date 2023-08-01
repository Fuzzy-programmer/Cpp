// Constructor

#include<iostream>
using namespace std;

class Area{
    int a,b;
    public: 
    //If the below constructor functions are not defined then the default constructor is called for every object created.
    Area(int x, int y){ // Parameterized constructor
        a=x; b=y; 
    }
    Area(int c){ //Parameterized constructor
        a=c;
    }
    Area(){ // Default constructor
        cout<<"Hey there!, I'm Constructor"<<endl;
    }
    //Copy Constructor
    Area(Area &a){ //here 'a' should be reference varriable because the (Area a) object should be created and intialized the passed actual arguments and falls in recursion.
        a=a.a;
        b=a.b;
    }
};

int main(){
    Area a1(3,4),a2=(2),a3,a4; //By default constructor is implicitly invoked when an object is created.
    Area a5(a1); // Copy constructor invoked to create a5 as a copy of a1
    Area a6 = a1; // Copy constructor invoked to create a6 as a copy a1
    a4 = a1; // Assignment operator is invoked defaultly
    // Copy constructor is invoked while pass by value of an object in functions
    // Copy consturctor is invoked while Returning Objects from Functions.
}