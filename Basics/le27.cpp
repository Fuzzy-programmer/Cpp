// Intializers

#include<iostream>
using namespace std;

class Dummy{
    int a,b;
    const int x;
    int &y;
    public:
        Dummy(int &n):a(5),b(6),x(6),y(n){ // Through Intializer list Intializiation we can intialize constants/reference variable but not with constructor

        }
};

int main(){
    int m=6;
    Dummy d1(m);
}