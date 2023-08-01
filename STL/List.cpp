#include<iostream>
#include<list>
using namespace std;

void print(list<int> l1){
    list <int>::iterator p1=l1.begin();
    while(p1!=l1.end()){
        cout<<*p1<<" ";
        p1++;
    }
    cout<<endl;
}

int main(){
    list <int> l1 {20,22,25,33,99,88,11};
    list <string> l2(5,"lohith");
    l1.pop_back();
    l1.pop_front();
    l1.emplace_front();
    l1.sort();
    print(l1);
    l1.reverse();
    print(l1);
    l1.remove(33);
    print(l1);
    l1.clear();
    print(l1);


    cout<<l2.size()<<endl;
    l2.push_back("kadiyala");
    l2.push_front("first name");
    list <string>::iterator p=l2.begin();
    while(p!=l2.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
}