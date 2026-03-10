#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

void printinreverse(int n){
    if(n==0) return;
    cout<<n<<endl;
    printinreverse(n-1);
}


int main(){
    int n;
    cin>>n;
    int i=1;

    print(i,n);

    
    printinreverse(n);

    return 0;
}