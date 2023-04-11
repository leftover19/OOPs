#include<iostream>
using namespace std;
/*
------------------------Static data members and method---------------------
*/

class Employee{
    int id; 
    static int count; // if not static, then each object will share it's own value of count

    public:
        void setData();
        void getData();
        static void getcount(){
            /* 
            This access only static data member / variables in class
            it is access without creating any object
            */
            cout<<" value of count is : "<< count <<endl;
        }
};
int Employee:: count; 
/*
To specify that count is a member of Employee class
now count is a property of class and not the property of object in class
Default value is 0
*/

void Employee::setData(){
    cout<<"Enter the id : \n";
    cin>> id;
    count++;
}

void Employee::getData(){
    cout<<"Id of this employee is : "<<id <<" and this is employee number: "<< count<<endl;

}

int main(){
    Employee vishwas , shivang , sakshi ;
    vishwas.setData();
    vishwas.getData();
    Employee::getcount();
    
    shivang.setData();
    shivang.getData();
    Employee::getcount();

    sakshi.setData();
    sakshi.getData();
    Employee::getcount();

    return 0;
}