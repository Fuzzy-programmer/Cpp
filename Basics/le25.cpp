// tellg() and tellp() in file handling

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    char ch;
    fin.open("a.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos<<endl;
    fin>>ch;
    cout<<ch<<endl;
    pos=fin.tellg();
    cout<<pos<<endl;
    fin>>ch;
    cout<<ch<<endl;
    pos=fin.tellg();
    cout<<pos<<endl;
    fin.close();

    ofstream fout;
    fout.open("a.txt",ios::app);
    int pos1;
    pos1=fout.tellp();
    cout<<pos1<<endl;
    fout.close();
}