// Destructor

#include<iostream>
using namespace std;

class Vehicle{
    int wheels, engine;
    public:

    ~Vehicle(){
        cout<<"I'm Destructor the last function invoked before an object destroys"<<endl;
    }
};

void fun(){
    Vehicle v;
}

int main(){
    fun();
}
