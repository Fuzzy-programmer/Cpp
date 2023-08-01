// pass by value
// pass by address
// pass by refernce

#include<iostream>
using namespace std;

int sum(int a=0, int b){ // Formal args are ordinary varriables
    a=a+b;
    return a;
}

void sump(int *a, int *b){ // Formal args are pointer varriables
    *a=*a+*b;
}

void sumr(int &a, int &b){ // Formal args are reference varriables
    a=a+b;
}

int main(){
    int x,y;
    cin>>x>>y;
    int s=sum(x,y);// Actual arguments
    cout<<"sum is "<<s<<endl;

    sump(&x,&y);
    cout<<"value of sum by address is "<<x<<endl;

    sumr(x,y);
    cout<<"value of sum by reference is "<<x<<endl;
}
