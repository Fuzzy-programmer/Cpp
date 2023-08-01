// File handling opening modes

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("le5.cpp",ios::in); // file path and opening modes are passed as arguments. //ios::out//ios::app//ios::update//ios::binary
    char ch;
    while(!file.eof()){
    cout<<ch;
    ch=file.get();
    }
    cout<<endl;
    file.close();
}