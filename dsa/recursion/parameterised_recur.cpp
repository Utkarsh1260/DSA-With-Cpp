#include<iostream>
using namespace std;

int parameteriseRrec(int n, int sum){
    
    if(n==0) return sum;

    parameteriseRrec(n-1, sum=sum+n);

}



int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;

    int sum=0;
    cout<<parameteriseRrec(n,sum);

    return 0;
}