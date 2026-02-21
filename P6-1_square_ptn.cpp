#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number of rows you want= ";
    cin>>n;

    //Print Square Pattern star
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

 
    //Print Square Pattern same number in a row(i)
        for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cout<<i;
        }
        cout<<endl;
    }


      //Print Square Pattern all j vlaue in a row 
        for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cout<<j;
        }
        cout<<endl;
    }


      //Print Square Pattern different numbers in each rows 
        int num=1;
        for(int i=0; i<n; i++){
          
        for(int j=0; j<n-1; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }


          //Print Square Pattern of alphabets
          char ch='A';
        for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

            //Print Square Pattern of same alphabets in each row
         
        for(int i=0; i<n; i++){
             char ch='A';
        for(int j=0; j<n-1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}