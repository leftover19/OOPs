#include<iostream>
using namespace std;
/*
----------------Basics on how to creat class and use functions------------------
*/ 
class Employee{
    private:
        int a , b , c;
    public:
        int d , e;
        void setData(int a1 ,int  b1 ,int c1);
        void getData(){
            cout<<"Value of a : "<<a <<endl;
            cout<<"Value of b : "<<b <<endl;
            cout<<"Value of c : "<<c <<endl;
            cout<<"Value of d : "<<d <<endl;
            cout<<"Value of e : "<<e <<endl;
        }
};

void Employee :: setData(int a1, int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main(){
    Employee harry;
    harry.setData(1 ,  2 , 3);
    harry.d = 34;
    harry.e = 12;
    
}