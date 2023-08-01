#include<iostream>
using namespace std;
// It is not a container
class student{
    int age;
    string name;
    public:
        student (string s, int a){
            name=s; 
            age=a;
        }
        student(){}
        void showStudent(){
            cout<<"Name "<<name<<endl;
            cout<<"Age "<<age<<endl;
        }
};
int main(){
    pair <string, int> p1;
    pair <int, pair<int, int>> p={1,{1,2}};
    cout<<p.second.first<<" "<<p.second.second<<endl;
    pair <int, int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;
    pair <string, string> p2;
    pair <string, float> p3;
    pair <int, student> p4;
    student s1("lohith",3);
    p4=make_pair(4,s1);
    p1=make_pair("Lohith", 20);
    p2=make_pair("lohith", "Kadiyala");
    p3=make_pair("Lohith", 22);
    cout<<p1.first<<" ";
    cout<<p2.second<<endl;
    student s2=p4.second;
    s2.showStudent();
}