// Deep Copy and Shallow Copy
// Shallow Copy 

#include<iostream>
using namespace std;

class le28{
    int x,y;
    public:
    void setData(int x, int y){
        this->x=x; 
        this->y=y;
    }
    void showData(){
        cout<<"x = "<<x<<" y ="<<y<<endl;
    }
};

int main(){
    le28 l1,l2;
    l1.setData(2,3);
    l2=l1; // Implicit copy assignment operator && Deep Copy
    le28 l3=l2; // Copy contructor && Shallow Copy
    l2.showData();
}