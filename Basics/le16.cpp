// This pointer

#include<iostream>
using namespace std;

class Box{
    int l,b,h;
    public:
        void setDimension(int l, int y, int z){
            this->l=l; b=y; h=z; // this is applied to the objects of the class in the instance member functions.
        }
        void showDimension(){
            cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl; 
        }
};

int main(){
    Box sbox, *p;
    p=&sbox;
    p->setDimension(2,3,4);
    // sbox.setDimension(2,3,4);
    // sbox.showDimension();
    (*p).showDimension();
}