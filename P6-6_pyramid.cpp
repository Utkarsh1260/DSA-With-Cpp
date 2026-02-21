#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
    
   for(int i=0;i<n;i++)
   {
    for(int s=0; s<n-i-1; s++){ // prints spaces
        cout<<" ";
    }

    
//right side triangle
    for(int j=1;j<=i+1;j++){
        cout<<j;
    }

//left side triangle
    for(int k=i; k>=1; k--){
        cout<<k;    
    }
        cout<<endl;
    }

    return 0;
}