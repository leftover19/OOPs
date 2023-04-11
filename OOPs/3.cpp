#include<iostream>
using namespace std;
/*
-------------Memory allocation via creating objects and using array-------------
*/
class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){
            counter = 0;
        }      
        void displayPrice();
        void setPrice();
};


void shop :: setPrice(){
    cout<<"enter id of your item: ";
    cin>> itemID[counter];
    cout<<"Enter price of your item: ";
    cin>> itemPrice[counter];
    counter++;
}

void shop:: displayPrice(void){
    for(int i = 0 ; i < counter ; i++){
        cout<< "Price of item with ID "<<itemID[i]<<" is "<< itemPrice[i]<<endl;
    }
}

int main(){
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
}