//number hashing

#include<iostream>
using namespace std;

int main(){
   
    //array size input
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
 cout<<endl;
    //array elements input
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<endl;

    //storing frequency of array elements using hasmap
    int hashmap[n]={0};
    for(int i=0; i<n; i++) hashmap[arr[i]]++;

    //get frequency
    int t;
    cin>>t;
    while(t--){
    int f;
    cin>>f;
    cout<<"frequency of "<<f<<" is "<<hashmap[f]<<" times"<<endl;
    }


    return 0;
}


// array declared inside main can only have 10^6 values only
// array declared globally can only have 10^7 values only

//In case of bool
// array declared inside main can only have 10^7 values only
// array declared globally can only have 10^8 values only