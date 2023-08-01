// Templates (Classs)

#include<iostream>
using namespace std;

// class ArrayList{
//     struct controlblock{
//         int capacity;
//         int *arr_ptr;
//     };
//     controlblock *s;
//     public:
//     ArrayList(int capacity){
//         s= new controlblock;
//         s->capacity=capacity;
//         s->arr_ptr= new int[s->capacity];
//     }
//     void addElement(int index, int data){
//         if(index>=0 && index<=(s->capacity-1)){
//             s->arr_ptr[index]=data;
//         }
//         else cout<<"Array index is not valid"<<endl;
//     }
//     void viewElement(int index, int &data){
//         if(index>=0 && index<=(s->capacity-1)){
//             data=s->arr_ptr[index];
//         }
//         else cout<<"Array index is not valid"<<endl;
//     }
//     void viewList(){
//         int i;
//         for(i=0;i<s->capacity;i++){
//             cout<<" "<<s->arr_ptr[i];
//         }
//         cout<<endl;
//     }
// };

template <class x> class ArrayList{
    struct controlblock{
        int capacity;
        x *arr_ptr;
    };
    controlblock *s;
    public:
    ArrayList(int capacity){
        s= new controlblock;
        s->capacity=capacity;
        s->arr_ptr= new x[s->capacity];
    }
    void addElement(int index, x data){
        if(index>=0 && index<=(s->capacity-1)){
            s->arr_ptr[index]=data;
        }
        else cout<<"Array index is not valid"<<endl;
    }
    void viewElement(int index, x &data){
        if(index>=0 && index<=(s->capacity-1)){
            data=s->arr_ptr[index];
        }
        else cout<<"Array index is not valid"<<endl;
    }
    void viewList(){
        int i;
        for(i=0;i<s->capacity;i++){
            cout<<" "<<s->arr_ptr[i];
        }
        cout<<endl;
    }
};

int main(){
    float data;
    ArrayList <float> a1(5);
    a1.addElement(0,32.2);
    a1.viewElement(0,data);
    cout<<"Value in the array is "<<data<<endl;
    a1.addElement(1,22.7);
    a1.addElement(2,33.0);
    a1.addElement(3,25.7);
    a1.viewList();
    a1.addElement(1,23.4);
}