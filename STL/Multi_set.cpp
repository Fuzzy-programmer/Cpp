#include<bits/stdc++.h>
using namespace std;
// mutliset - sorted but not unique
int main(){
    multiset <int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(5);

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(2)+2);
}