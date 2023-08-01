#include<bits/stdc++.h>
using namespace std;
// set - sorted and unique | every operation insert, erase, find is O(logn)
int main(){
    set<int> st; // non linear storage of data like a tree
    st.insert(2);
    st.insert(5);
    st.insert(1);
    st.insert(4);
    st.emplace(5);

    // Functionality of insert in vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of vectors

    auto it= st.find(5);

    auto it= st.find(3);

    st.erase(5);

    int cnt= st.count(1); // it should be one

    auto it= st.find(1);
    st.erase(it);

    auto it1= st.find(2);
    auto it2= st.find(4);
    st.erase(it1, it2);

    auto it = st.lower_bound(2);
    auto it= st.upper_bound(5);
}