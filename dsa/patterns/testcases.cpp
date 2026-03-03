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


//pattern8 - pyramid
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

//pattern9 - run pattern 7 and 8 simultaneously you will get the desired pattern


//pattern10
pattern10(int n){
    for(int i=0; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=0;  j<=stars; j++){
            cout<< "*";
        }
        cout<<endl;
    }
}

//pattern11
pattern11(int n){
    
    for(int i=1; i<=n; i++){
        for(int j=1 ; j<=i; j++){

            if((i+j)%2==0) cout<<"1 "; //if even
            else cout<<"0 ";    //if odd
        }

        cout<<endl;
    }
}

//pattern12
pattern12(int n){
    int space=2*(n-1);
  
  for(int i=1; i<=n; i++){
    //number
    for(int j=0; j<=i; j++){
        cout<<j;
    }

    //spaces
    for(int j=1; j<=space; j++){
        cout<<" ";
    }

    //number
    for(int j=i; j>=1; j--){
        cout<<j;
    }

    cout<<endl;
    space-=2;
  }
}

//pattern13
pattern13(int n){
  int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<num<<" ";
            num+=1;

        }
        cout<<endl;
    }
}

//pattern14
pattern14(int n){
  
    for(int i=0; i<n; i++){
        
       for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
            

        }
        cout<<endl;
    }
}

//pattern15
pattern15(int n){
  for(int i=1; i<=n; i++){
    
          for(char ch='A'; ch<='A'+(n-i-1); ch++){
            cout<<ch<<" ";
            

        }

        cout<<endl;
    }
}

//pattern16
pattern16(int n){
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

//pattern17
void pattern17(int n){
    for(int i=0; i<n; i++ ){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout <<" ";

        }

        //character
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//pattern18
void pattern18(int n){
    for(int i=0;i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//pattern19
void pattern19(int n){
    int iniS=0;
    for(int i=0; i<n; i++){
        //stars
       for(int j=1;j<=n-i; j++){
        cout<<"*";
       }
    

    //spaces
    for(int j=0; j<iniS; j++){
        cout<<" ";
    }

    //stars
    for(int j=1; j<=n-i; j++){
        cout<<"*";
    }

    iniS+=2;
    cout<<endl;
}
iniS=2*n-2;
for(int i=1; i<=n; i++){

        //stars
       for(int j=1;j<=i; j++){
        cout<<"*";
       }
    

    //spaces
    for(int j=0; j<iniS; j++){
        cout<<" ";
    }

    //stars
    for(int j=1; j<=i; j++){
        cout<<"*";
    }

    iniS-=2;
    cout<<endl;
}
}

//pattern20
void pattern20(int n){
    int spaces =2*n - 2;
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        //spaces
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}

//pattern21
void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout <<"*";
            }
            else cout <<" ";
        }
        cout <<endl;
    }
}


//pattern22
void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top, down),min(left, right)));
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
      
        pattern19(n); // sent n(now of rows or lines) as an argument to pattern function
    }

    return 0;


}


