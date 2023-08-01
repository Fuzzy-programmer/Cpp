// Type Conversion between Class type to Class type

#include<iostream>
using namespace std;
class item;
class product{
    int m,n;
    public:
    void setData(int x, int y){
        m=x; n=y;
    }
    int getm(){ return m;}
    int getn(){ return n;}

    // operator item(){
    //     item temp;
    //     temp.geta()=m;
    //     temp.getb()=n;
    //     return temp;
    // }
};

class item{
    int a,b;
    public:
    void setData(int x, int y){
        a=x; b=y;
    }
    void showData(){
        cout<<"a - "<<a<<" b -"<<b<<endl;
    }
    item(){ }
    item(product p){
        a=p.getm();
        b=p.getn();
    }
};

int main(){
    item i1;
    product p1;
    p1.setData(2,3);
    i1=p1; //type conversion if using LHS side then constructor is used or using RHS side then casting operator is used in RHS class
    i1.showData();
}