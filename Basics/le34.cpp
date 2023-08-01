// namespace 
#include<iostream>
using namespace std;

namespace Myspace{
    int a;
    int f1();
    class A{
        public:
            virtual void f1()=0;
    };
}

int f1(){
    cout<<"Hello f1"<<endl;
}

// using namespace Myspace; In the case if scope resolution operator is not used
int main(){
    namespace ms=Myspace;
    ms::a=5;
}