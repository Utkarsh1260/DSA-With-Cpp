#include<iostream>
using namespace std;

void name(int i, int n){
    if(i>n) return;
    cout<<i<<" Utkarsh"<<endl;
    name(i+1,n);
}

int main(){
    int n=5;
    int i=1;
    name(i,n);

    return 0;
}