#include<iostream>
using namespace std;

void insertion_sort(int a[], int n,int &swap_count){
   
    for(int i=1; i<n;i++ ){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
            swap_count++;
        }
        
    }
    cout<<swap_count<<endl;
    
}

int main(){
    

// array input and size
 int swap_count=0;
int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++) cin>>a[i];
 insertion_sort(a,n,swap_count);

 //print sorted array
 for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}


//it puts the element to its right position or index
// its worst,avg Tc is O(n^2)
// best case is O(n)
