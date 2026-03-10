#include<iostream>
using namespace std;


int functionalRec(int n){
    if(n==0) return 0 ;

    return n+functionalRec(n-1);
}


int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;

   int result=functionalRec(n);
   cout<<result;
    return 0;
}