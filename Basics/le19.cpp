// Virtual Function (Problem in function of Method overriding)

#include<iostream>
using namespace std;

class A{
    public:
    virtual void f1(){ } // By mentioning the virtual keyword which has to be overriden that leads to late binding and the child class f1 will be binded
};

class B: public A{
    public:
    void f1() override{ } // Method overriding
    void f2() { }
};

int main(){
    A *p, o1;
    B o2;
    p=&o2;
    o2.f1(); // B class method will be executed.
    p->f1(); // A class method will be executed because of the pointer type.
    // The above two lines are the problem in method overriding which is because of early binding in which method overriding is not happening when the base class pointer is used.
}
// We need to overcome the not happening of method overriding i.e possible when late binding is happened (Runtime binding).
// see lecture 18.



// <-----------------------------Important to see------------------------------------------------------->
// // Runtime Polymorphism

// #include<iostream>
// using namespace std;

// class A{
//     public:
//         // *_vptr; // which points vtable contains the pointer to the virtual methods

//         void f1(){}
//         virtual void f2() {}
//         virtual void f3() {}
//         virtual void f4() {}
// };

// class B: public A
// {
//     public:
//         // the vptr instance member var which is declared in the parent class is inherited to the descendant classes and points to the vtable(consists the address of the virtual functions) for the every instance of the object
//         void f1(){} 
//         void f2(){}
//         void f4(int x){}
// };

// int main(){
//     A *p, o1;
//     p = &o1;
//     p->f1(); //Early Binding A
//     p->f2(); //Late Binding A
//     p->f3(); //Late Binding A
//     p->f4(); //Late Binding A
//     p->f4(5); //Error
// }

// int main(){
//     A *p;
//     B o2;
//     p = &o2;
//     p->f1(); //Early Binding A
//     p->f2(); //Late Binding B
//     p->f3(); //Late Binding A
//     p->f4(); //Late Binding method A which will be inherited and pointed by vtable of the class B instance of o2
//     p->f4(5); //Early Binding method in class A will be called but there is no match of arg so raises error
// }