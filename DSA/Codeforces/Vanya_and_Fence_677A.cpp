#include<iostream>
using namespace std;

int main(){
    int n,h, a[10000],count=0;

    cin>>n>>h;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]<=h){
            count+=1;
        }

        else{
            count+=2;
        }
    }

    cout<<count;

    return 0;
}