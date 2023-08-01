// Abstract class

#include<iostream>
using namespace std;

class Person{ // abstract class
    public:
        virtual void fun()=0; // Pure virtual function is not defined inside or outside the class (do nothing should not be called, so the object of person class should not be created and not accessable for any object).
        void f1() { }
};

class Student: public Person{
    public:
        void fun(){  // it is compulsory to Override the parent class function beacuse donothing method should not be accessable for child class object.

        }
};

// ***** do nothing should not be called, so the object of person class should not be created and not accessable for any object.
// it is compulsory to Override the parent class function and we can use the student obj and access remaining non donothing functions.
// if the child class method does not overrides the pure virtual function then declare the same virtual pure method in parent as virutal function in the child class such that it becomes abstract class.
// do nothing function declaration must be "returntype functionname()=0;"
// virtual keyword is used before donothing function because for deciding the binding of method in runtime(so that if parent class pointer to the child class object does not calls the donothing function in parent class which is known as early binding.)