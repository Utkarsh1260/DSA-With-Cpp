#include<iostream>
using namespace std;

void bubble_sort(int a[], int n,int &swap_count){
    int j,i;
  
    for(i=0; i<n-1;i++ ){
          bool swaped=false;
     for(j=0; j<n-i-1; j++){
        if(a[j+1]<a[j]){
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
           swap_count++;
            swaped=true;
        }
       
        
     }
     if(!swaped) { 
        cout<<"i = "<<i<<endl;
        cout<<"j = "<<j<<endl;
        break; }
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
 bubble_sort(a,n,swap_count);

 //print sorted array
 for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}


//pushes maximum element to right
// its worst Tc is O(n^2)
// best case is O(n)