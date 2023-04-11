#include<iostream>
using namespace std;
/*
-----------------------------------Friend functions------------------------------
*/
class complex{
    friend complex sumcomplex(complex o1 , complex o2);
    int a , b;
        public:
        /*
        Below line means that non-member function -> sumcomplex is allowed to do
        anything with private members of complex class.
        */

            void setdata(int v1 , int v2){
                a = v1;
                b = v2;
            }

            void printnumber(){
                cout<<"complex number is : "<<a <<" + " <<b <<"i"<<endl; 
            }
};

complex sumcomplex(complex o1 , complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b + o2.b) );
    o3.printnumber();
    return o3;
}

/* 
Properties of friend functions
1. Not in the scope of class.
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object.
4. Usually contans the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/

int main(){
    complex c1 , c2 , sum;

    c1.setdata(1 , 2);
    c2.setdata(3 , 4);

    c1.printnumber();
    c2.printnumber();


    sum = sumcomplex(c1,c2);

}




