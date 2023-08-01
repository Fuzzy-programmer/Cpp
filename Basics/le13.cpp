// Inheritance with Visibility modes

#include<iostream>
using namespace std;

class A{
    int a; // Defaultly class considers private member
    protected:
        void setValue(int x){
            a=x;
        }
        void showValue(){
            cout<<a<<endl;
        }
};

class B: public A{
    public:
        void setData(int y){
            setValue(y); // protected members are accessable through inheritance.
        }
        void showData(){
            showValue();
        }
};

int main(){
    B obj;
    obj.setData(4);
    // obj.setValue(3); // Inherited as protected member it cannot be directly accessable with an object
    obj.showData();
}