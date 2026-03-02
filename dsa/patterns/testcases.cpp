#include<iostream>
using namespace std;


pattern1(int n){

}

 //for start only in right angle triangle pattern
pattern2(int n){

   
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }

        cout<<endl;
    }
}

// for j only in right angle triangle pattern
pattern3(int n){
  for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }

        cout<<endl;
    }
}

//for i only in right angle triangle pattern
pattern4(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }

        cout<<endl;
    }
}

//pattern5
pattern5(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}
//pattern6
pattern6(int n){
  for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}

//pattern7
pattern7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }

        //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<n-i+1; j++ ){
            cout<<" ";
        }

        cout<<endl;




    }
}


//pattern8
pattern8(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";

        }

        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<i; j++ ){
            cout<<" ";
        }

        cout<<endl;




    }
}


int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        pattern8(n); // sent n(now of rows or lines) as an argument to pattern function
    }

    return 0;


}


