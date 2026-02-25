#include<iostream>
using namespace std;

int main(){
    int n,k,a[10000],counter=0;
//n is no of participant and k is the position
   
    cin>>n>>k;



   
    for(int i=0; i<n; i++)
        cin>>a[i];


       for(int i=0; i<n; i++){
        if(a[i] >= a[k-1] && a[i] >0)
            counter++;
       }


cout<<counter<<endl;

       return 0;
}