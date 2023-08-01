// Deep Copy

#include<iostream>
using namespace std;

class le29{
    int x,y;
    int *p;
    public:
    le29(){
        p=new int;
    }
    void setData(int x, int y,int z){
        this->x=x; 
        this->y=y;
        *p=z;
    }
    void showData(){
        cout<<"x = "<<x<<" y ="<<y<<endl;
    }
    le29(le29 &x){
        this->x=x.x;
        this->x=x.y;
        p=new int;
        *p=*(x.p);
    }
};

int main(){
    le29 l1,l2;
    l1.setData(2,3,4);
    l2=l1;
    l2.showData();
}