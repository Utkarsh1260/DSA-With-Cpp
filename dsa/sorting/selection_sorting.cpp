#include<iostream>
using namespace std;

void selection_sort(int arr[], int n,int &swap_count){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
           if(arr[j]<arr[min]){
             min=j;
           }
        }
           int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
                swap_count++;
    }
    cout<<swap_count<<endl;
}

int main(){
    

// array input and size
 int swap_count=0;
int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++) cin>>arr[i];
 selection_sort(arr,n,swap_count);

 //print sorted array
 for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}