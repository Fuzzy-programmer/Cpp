#include<bits/stdc++.h>
using namespace std;
// LIFO O(1)- any operation push pop top
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    
    stack<int> s1,s2;
    s1.swap(s2);
}