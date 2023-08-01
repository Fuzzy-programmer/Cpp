#include<iostream>
#include<cstring>
using namespace std;

class Student{
    // By default member varriables of class are private
    int rollno;
    char name[20];
    class Address{
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
        public:
            void setAddress(int h, char *st, char *c, char *s, char *p){
                houseno=h;
                strcpy(street,st);
                strcpy(city,c);
                strcpy(state, s);
                strcpy(pincode,p);
            }
            void showAddress(){
                cout<<houseno<<" "<<street<<" "<<city<<" "<<state<<" "<<pincode<<endl;
            }
    };
    Address add;

    public:
        void setrollno(int rollno){
            this->rollno=rollno;
        }
        void setname(char *c){
            strcpy(name, c);
        }
        void setAddress(int h, char *st, char *c, char *s, char *p){
            add.setAddress(h, st, c, s, p);
        }

        void showData(){
            cout<<"Student data"<<endl;
            cout<<rollno<<endl;
            cout<<name<<endl;
            add.showAddress();
        }
};

int main(){
    // Student::Address a1; this declaration is valid if the addess member varriable object is declared as public
    Student s1;
    s1.setname("Rohith");
    s1.setrollno(22);
    s1.setAddress(286, "indra gandhi stree", "Kakindad", "AP", "530005");

    s1.showData();
}