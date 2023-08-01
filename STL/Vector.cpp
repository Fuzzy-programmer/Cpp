#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> v0{10,20,30}; // intilaizing the vector with elements 10,20,30
    vector<char> v1(4); //providing size to the vector 
    vector<int> v2(5,10); // size of the vector is 5 and all are intialized with 10 
    vector<string> v3(3,"hello");

    // subscript operator[]
    cout<<v3[0]<<endl;
    cout<<v3[1]<<endl;
    cout<<v3[2]<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(12);
    // cout<<v.capacity()<<endl;
    // v.push_back(13);
    // cout<<v.capacity()<<endl;
    // v.push_back(14);
    // cout<<v.capacity()<<endl; // capacity doubles for every insertion

    // push_back, pop_back
    for(int i=0;i<9;i++)
        v.push_back(10*(i+1));

    v.emplace_back(20); // faster than the pushback() function
    vector <pair<int, int>> vec;
    vec.emplace_back(1,2);
    vec.push_back({1,2});


    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.capacity()<<endl; // capacity is not decreasing after poping the elements from the array
    cout<<"Number of elements in vector "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // clear
    v.clear(); 

    // capacity, size, at
    cout<<v.capacity()<<" "<<v.size()<<endl;
    // cout<<v.at(3)<<endl;

    // front, back
    cout<<v0.front()<<endl;
    cout<<v0.back()<<endl;

    //Iterator, insert, begin, end
    vector <string>::iterator it=v3.begin(); // It is equivalent to the |auto it=v.begin();|
    v3.insert(it+3,"world");
    for(int i=0;i<v3.size();i++)
    cout<<v3[i]<<" ";
    cout<<endl;
    for(auto i: v3){
        cout<<i<<" ";
    }
    cout<<endl;
    v3.erase(v3.begin()+1, v3.end()-4);
    v2.swap(v0);
}