#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter the size of the array: ";
 cin>>n;

 int arr[n];
 for(int i=0; i<n; i++){
    cout<<"Enter the element of index arr["<<i<<"]: ";
    cin>>arr[i];
 }

 int min=arr[0];
 for(int i=0; i<n; i++){
    if(arr[i]<min){
        min=arr[i];
    }
 }

    cout<<"The minimum element in the array is: "<<min;

    return 0;
}