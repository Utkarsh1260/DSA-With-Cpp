#include<iostream>
using namespace std;

int main(){

    //aray declaration
    // int arr[];

    //array declaration with size
    int arr1[5];

    //array declaration with size and initialization(Elements)
    int arr2[5] = {1, 2, 3, 4, 5};

    //array declaration with size and initialization(Elements) without size
    int arr3[] = {1, 2, 3, 4, 5};

    //array using loop
    int arr4[5];
    for(int i=0; i<5; i++){
        cout<<"Enter element ";
        cin>>arr4[i];
    }

    for(int i=0; i<5; i++){
        cout<<arr4[i]<<" ";
    }

    return 0;
}