// Exception Handling

#include<iostream>
using namespace std;

void fun(){
    throw 10;
}
int main(){
    cout<<"Welcome"<<endl;
    // throw 10; // if there is no try catch along with throw the program will gets halted.
    try{
        // throw 10;
        fun();
        cout<<"In try"<<endl;
    }
    catch(int e){
        cout<<"Exception no: "<<e<<endl;
    }
    catch(double e){
        cout<<"Exception no: "<<e<<endl;
    }
    // catch(...){
        // It can catch any type of data is allowed
    // }
    cout<<"Last line"<<endl;
}