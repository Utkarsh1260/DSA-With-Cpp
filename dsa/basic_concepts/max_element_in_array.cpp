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

 int max=arr[0];
 for(int i=0; i<n; i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }

    cout<<"The maximum element in the array is: "<<max;

    return 0;
}