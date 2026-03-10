#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    int lastdigit=fibo(n-1);
    int secondlast=fibo(n-2);
    return lastdigit+secondlast;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    

    return 0;
}