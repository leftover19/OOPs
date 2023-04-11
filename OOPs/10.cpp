#include<iostream>
using namespace std;

/*
-----------------Constructor and Destructor----------------
1. Constructor is a special member function with the same name as of the class.
2. It is used to initialize the objects of it's class.
3. It is automatically invoked when an object is created.
4. It should be declared in the public section of class.
5. They can not have return values and do not have return type.
6. It can have default arguments
7. We can not refer to their address

*/

class Complex{
    int a , b; 
    public: 
        Complex(void);  // Constructor declaration
        void printnumber(void){
            cout<<"Complex number : "<<a <<" + "<<b<<"i"<<endl;
        }
};

Complex::Complex(void){ // This is default constructor as it taked no parameters
    a = 0;
    b = 0;
}

int main(){
    Complex c1 , c2;

    c1.printnumber();
    c2.printnumber();

    return 0;
}