#include<iostream>
using namespace std;

int main(){
    double price=99.99;
    int discounted_price=(int)price; // explicit conversion from double to int
    cout<<"The discounted price is "<<discounted_price<<endl;
    
    return 0;
}