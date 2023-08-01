#include<bits/stdc++.h>
using namespace std;
// O(logn)- insertion, sorting, deletion |O(1)- Min/Max
int main(){
    priority_queue <int> pq;
    pq.push(5);
    pq.push(4);
    pq.push(3);
    pq.emplace(10);
    
    cout<< pq.top();

    pq.pop();

    cout<<pq.top();

    // size swap empty function same as others

    //Minimum heap
    priority_queue <int, vector<int>, greater<int>> pq;

}