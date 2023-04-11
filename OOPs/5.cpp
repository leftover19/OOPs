#include<iostream>
using namespace std;
/*
----------------------------Passing objects via functions-----------------------
*/
class complex{
    int a , b;
        public:
            void setdata(int v1 , int v2){
                a = v1;
                b = v2;
            }
            void setDatabySum(complex o1 , complex o2){
                a = o1.a + o2.a;
                b = o2.b + o1.b;
            }
            void printnumber(){
                cout<<"complex number is : "<<a <<" + " <<b <<"i"<<endl; 
            }
};

int main(){
    complex c1 , c2 , c3;

    c1.setdata(1 , 2);
    c2.setdata(3 , 4);
    c3.setDatabySum(c1 , c2);

    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
}