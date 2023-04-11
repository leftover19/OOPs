#include <iostream>
using namespace std;
/*
-----------------------------------Friend classes and member--------------------
*/

// Forward declaration of class
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
};

class complex
{
    int a, b; // private data
    friend int calculator::sumRealComplex(complex o1, complex o2);
    friend int calculator::sumImaginaryComplex(complex o1, complex o2);
    // or write
    friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "complex number is : " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex c1, c2, sum;
    c1.setdata(1, 4);
    c2.setdata(4, -6);
    calculator calc;

    cout<<calc.sumImaginaryComplex(c1, c2)<<endl;
    cout<< calc.sumRealComplex(c1, c2);
}
