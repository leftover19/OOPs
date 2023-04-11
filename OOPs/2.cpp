#include<iostream>
using namespace std;
/*
-------------------------Nesting of member functions-------------------------
*/
class binary{
    string s;

    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};


void binary::read(void){
    cout<<"enter binary string: ";
    cin>> s;
}

void binary:: chk_bin(void){

    for(int i = 0 ; i< s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
    cout<<"Correct Binary format\n"; 
}

void binary::ones(){
    chk_bin();  // This is nesting of member function
    for(int i = 0 ; i< s.length(); i++){
        if(s.at(i) == '1'){
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}
void binary:: display(){
    cout<<"Binary string : ";
    cout<< s ;
}



int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    cout<<endl;
    b.ones();
    b.display();
}