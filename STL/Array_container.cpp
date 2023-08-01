#include<iostream>
#include<array>
using namespace std;
// better to not use it use normal array
int main(){
    array <int, 5> obj={1,3,5,7};
    array <int, 8> obj1,obj2;
    cout<<obj.at(3)<<endl;
    cout<<obj[0]<<endl;
    cout<<obj.front()<<" "<<obj.back()<<endl;
    obj1.fill(7);
    obj2.fill(6);
    obj1.swap(obj2);
    for(int i=0;i<7;i++){
        cout<<obj1.at(i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<obj2.at(i)<<" ";
    }
    cout<<"\n"<<obj.size()<<endl;
}