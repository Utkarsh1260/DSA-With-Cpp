#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
    cout<<"a = "<<a<<endl;
    int k=a++; // post-increment: use a's value, then increment a
    cout<<"k = "<<k<<endl; // k gets the original value of a (5)
    cout<<"a = "<<a<<endl; // a is now 6


    int j=++a; // pre-increment: increment a first, then use its value
    cout<<"j = "<<j<<endl; // j gets the incremented value of a (7)
    cout<<"a = "<<a<<endl; // a is now 7

    int m=b--; // post-decrement: use b's value, then decrement b
    cout<<"m = "<<m<<endl; // m gets the original value of b (10)
    



    cout<<"b = "<<b<<endl;
    return 0;
}