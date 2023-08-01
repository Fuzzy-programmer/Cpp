#include<bits/stdc++.h>
using namespace std;

bool comp(const pair <int, int> &p1, const pair <int, int> &p2){
    if(p1.second < p2.second || p1.second==p2.second && p1.first> p2.first ) return 1;
    else
    return 0; 
}
int main(){
    array <int, 6> b={4,5,6,77,8,889};
    int a[]={4,5,6,77,8,889};
    sort(a, a+6);
    sort(a+2,a+4);

    vector<int> v0 {120,220,30};
    sort(v0.begin(), v0.end());  // Ascending order
    sort(v0.begin(), v0.end(), greater<int>()); // Descending order
    for(auto i: v0){
        cout<<i<<" ";
    }
    cout<<endl;

    pair <int, int> arr[]={{1,2},{3,4},{2,4},{5,6}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
    // sort(a, a+6, &comp); error
    
    cout<<endl;
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;

    int num=6;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;

    string s= "123";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    
    int maxi= *max_element(a,a+6);
    cout<<maxi<<endl;
}

// sort(v0.begin(), v0.end(), [](vector<int> i1,vector<int> i2){
//         return (i1>i2);
//     });
//     for(auto i: v0){
//         cout<<i<<" ";
//     }