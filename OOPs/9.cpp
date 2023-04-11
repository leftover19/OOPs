#include<iostream>
using namespace std;
class c2;

class c1{
    friend void exchange(c1& ,c2&);
    int val;
    public:
        void setdata(int a){
            val = a;
        }
        void display(void){
            cout<<"The value in c1 is : "<< val;
        }
};

class c2{
    friend void exchange(c1& ,c2&);
    int val;
    public:
        void setdata(int b){
            val = b;
        }
        void display(void){
            cout<<"The value in c2 is : "<< val;
        }
        
};

void exchange(c1 & a, c2 & b){
    int temp = a.val;
    a.val = b.val;
    b.val = temp;
}

int main(){

    c1 o1 ;
    c2 o2;

    o1.setdata(10);
    o2.setdata(50);
    exchange(o1 , o2);
    cout<< "displaying c1 : ";
    o1.display();
    cout<<endl;
    cout<< "displaying c2 : " ;
    o2.display();
    cout<<endl;
    return 0;
}