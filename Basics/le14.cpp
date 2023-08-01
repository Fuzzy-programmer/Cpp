// When to use private and protected inheritance?

#include<iostream>
using namespace std;

class Array{
    int a[10];
    public:
        void insert(int index, int value){
            a[index]=value;
        }
};

class Stack: /*public*/ protected Array{
    int top=1;
    public:
        void push(int value){
            if(top>10) 
            cout<<"stack is full "<<endl;
            insert(top,value);
            top++;
        }
};

int main(){
    Stack s1;
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);
    s1.push(34);   
    // s1.insert(2,34); it is not accessable if it is accessable for the child class stack properties will violate
}

