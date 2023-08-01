#include<bits/stdc++.h>
using namespace std;
// FIFO O(1) any operation is push front back pop
int main(){
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);

    q.back()+=5;

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    // size swap empty is same as stack
}