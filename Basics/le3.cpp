// Static members
#include<iostream>
using namespace std;

class Account{
    int balance; // instance member varriable
    static float roi; //class varriable || static member varriable
    public:
    static void setroi(float r){
        roi=r;
    }
    void set_data(int a){
        balance=a;
    }
};

float Account:: roi; //defaultly it is intialized to zero and the memory is allocated.

int main(){
    Account a1;
    a1.set_data(2.1);
    Account::setroi(3.1);
}

