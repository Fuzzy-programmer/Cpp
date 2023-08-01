// Dynamic Constructor

#include<iostream>
using namespace std;

class DC{
    int a,b;
    int *p;
    public:
        DC(int x, int y, int z){ // Dynamic constructor
            a=x;
            b=y;
            p=new int; // allocates memory dynamically
            *p=z;
        }
};

int main(){
    DC *obj;
    obj=new DC(2,3,4); // By using new keyword it doesn't mean dynamic constructor

}