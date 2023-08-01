#include<bits/stdc++.h>
using namespace std;

int main(){
    deque <int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(4);
    dq.emplace_front(5);
    dq.pop_back();
    dq.pop_front();
    dq.front();
    dq.back();

    // rest functions are same as vector begin, end, rbegin, clear, insert, size, swap
}