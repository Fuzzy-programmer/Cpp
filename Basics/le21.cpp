// Templates (Function)

#include<iostream>
using namespace std;

// int big(int a, int b){
//     int c;
//     (a>b)? c=a : c=b;
//     return c;
// }

// double big(double a, double b){
//     double c;
//     (a>b)? c=a : c=b;
//     return c;
// }

// Instead of using the same functions with different data type arguments as shown above we can using function template.

template <class x> x big(x a, x b){
    x c;
    (a>b)? c=a : c=b;
    return c;
}

int main(){
    cout<<big(2,3)<<endl;
    cout<<big(2.3,4.6)<<endl;
    // cout<<big(2.3,3)<<endl; we should redefine the template as template <class x, class y> y big(x a, y b)
}