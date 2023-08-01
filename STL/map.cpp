#include<iostream>
#include<map>
using namespace std;
// map - unique keys sorted order
int main(){
    map <int,string> customer;
    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Shahid";
    customer[200]="Rajesh";
    map <int, string> c1{ {100,"Gajendra"}, {123, "Dilip"}, {145, "Aditya"}, {171, "Shahid"}, {200, "Rajesh"} };
    

    customer.insert(pair<int,string>(205,"Lohith"));
    customer.insert({25,"hai"});


    map <int,string>::iterator i=customer.begin();
    while(i!=customer.end()){
        cout<<i->second<<" ";
        i++;
    }
    // cout<<endl<<customer.at(145)<<endl;
    cout<<endl<<customer[145]<<endl;
    for(auto it : customer){
        cout<<it.first<<" "<<it.second<<endl; 
    }

    auto it = customer.find(201);
    cout<<(*it).first<<endl;

    auto it= customer.lower_bound(145);
    auto it= customer.upper_bound(145);

    cout<<c1.size()<<endl;
    cout<<c1.empty()<<endl;
    c1.clear();
    cout<<c1.empty()<<endl;

    // erase, swap will work as other data structures.
}