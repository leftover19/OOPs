#include <iostream>
using namespace std;

//----------------Parameterized constructor------------
class Complex
{
    int a, b;

public:
    Complex(int x , int y);
    void printnumber()
    {
        cout << "Complex number : " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x , int y){
    a = x ;
    b = y;
}

int main()
{   // Implicit declaration
    Complex c1(0,1);
    // Explicit declaration
    Complex c2 = Complex(2 , 3); // Parameterized constructor

    c1.printnumber();
    c2.printnumber();







    return 0;
}