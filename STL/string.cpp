#include<iostream>
using namespace std;

int main(){
    char a[20]="hello students";
    string s1,s2="hello";
    string s3=s2; // reference
    s1=s3; // Assignment
    s2=a; // char pointer
    s3=s2+s1+s3+a;//mixed operations are allowed char array and string
    cout<<s3<<endl;
    string s4;
    cout<<"Enter your name ";
    cin>>s4;
    // getline(cin,s4);
    cout<<"Hello "<<s4<<endl;
    s4+=s4;
    cout<<s4<<endl;
    s4.assign(s3);
    s1.append(s3);
    s1.insert(3," hello ");
    cout<<s1<<endl;
    s1.replace(2,5,"");
    cout<<s1<<endl;
    s1.erase();
    cout<<s1.empty();
    cout<<s4.find("L")<<endl;
}