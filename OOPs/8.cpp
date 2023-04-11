#include<iostream>
using namespace std;
/*
-------------------Friend class more example and use of forward declaration--------------
*/

// Forward declaration is necessary here.
class Y;

class X{
    int data;
    friend void add(X , Y);
    public:
        void setdata(int a){
            data = a;
        }
};

class Y{
    friend void add(X , Y);
    int num;
    public:
        void setdata(int b){
            num = b;
        }
};


void add(X o1 , Y o2){
    cout<<"sum of numbers is : "<< o1.data + o2.num;
}

int main(){
    X a;
    Y b;
    a.setdata(4);
    b.setdata(10);


    add(a,b);

    return 0;
}