// File Handling 

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin;
    fout.open("a.txt");
    fout<<"hello"<<endl;
    fout.close();
    fin.open("a.txt");
    char ch;
    fin>>ch;
    while(!fin.eof()){
    cout<<ch;
    // fin>>ch; doesnt takes spaces as input from the file
    ch=fin.get();
    }
    cout<<endl;
    fin.close();
}