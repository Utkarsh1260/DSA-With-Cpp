#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j<(i+2)-1 ; j++){  // or use j<i+1
            cout<<"*"<<" ";
        }
cout<<endl;
    }


    // print same number in a row start j from 0
      for(int i=0;i<n;i++){
        for(int j=0; j<(i+2)-1 ; j++){  // or use j<i+1
            cout<<i<<" ";
        }
cout<<endl;
    }

        // print same number in a row start j from 1
      for(int i=0;i<n;i++){
        for(int j=0+1; j<(i+2)-1 ; j++){  // or use j<i+1
            cout<<i<<" ";
        }
cout<<endl;
    }

          // print j in a row
      for(int i=0;i<n;i++){
        for(int j=0+1; j<(i+2)-1 ; j++){  // or use j<i+1
            cout<<j<<" ";
        }
cout<<endl;
    }

    return 0;
}