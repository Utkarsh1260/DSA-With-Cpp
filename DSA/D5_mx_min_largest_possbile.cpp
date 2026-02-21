#include<iostream>
#include<climits>
using namespace std;

int main(){

 int n;
 cout<<"Enter the size of the array: ";
 cin>>n;

 //input elements
 int arr[n];
 for(int i=0; i<n; i++){
    cout<<"Enter the element of index arr["<<i<<"]: ";
    cin>>arr[i];
 }

 //compare
 int min=INT_MAX,max=INT_MIN;
 for(int i=0; i<n; i++){
    if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }
 }

    cout<<"The minimum is: "<<min<<" and max is: "<<max;




    return 0;
}