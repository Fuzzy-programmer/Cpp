// seekg() and seekp()

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("a.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(3);
    cout<<(char)fin.get()<<endl;
    fin.seekg(2, ios_base::beg);
    cout<<fin.tellg()<<endl;
    fin.close();
}