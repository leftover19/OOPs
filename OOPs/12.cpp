#include <iostream>
#include <cmath>
using namespace std;
/*
----------------------Constructor example--------------
Create a function that computes distance between two points. Take input from point class
*/

class Point
{
    int x, y;
    friend int Distance(Point p1, Point p2);

public:
    Point(int a, int b);
    void printPoint(void)
    {
        cout << "Point : (" << x << " , " << y << ")" << endl;
    }
};

int Distance(Point p1, Point p2)
{

    int x_dis = (p1.x - p2.x) * (p1.x - p2.x);
    int y_dis = (p1.y - p2.y) * (p1.y - p2.y);

    return sqrt(x_dis + y_dis);
}

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{

    Point p1(0, 0), p2(0,5);
    cout << Distance(p1, p2);
    // p1.printPoint();
    // p2.printPoint();

    return 0;
}