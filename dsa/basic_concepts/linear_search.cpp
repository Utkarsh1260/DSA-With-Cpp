#include<iostream>
#include<climits>
using namespace std;

int main(){

 int n;
 cout<<"Enter the size of the array: ";
 cin>>n;

 //input elements
 int arr[n],t,index;
 for(int i=0; i<n; i++){
    cout<<"Enter the element of index arr["<<i<<"]: ";
    cin>>arr[i];
 }

 cout<<"Enter the target element ";
 cin>>t;

 
 for(int i=0; i<n; i++){
   if(arr[i]==t){
index=i;
break;
   }
    
 }

 cout<<index;

   


    return 0;
}