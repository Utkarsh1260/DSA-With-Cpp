#include <iostream>
using namespace std;

int main() {
    int p;

    cout<<"Enter your percentage:"<<endl;
    cin>>p;

    if(p>=90){
        cout<<"A++";
    }

    else if(p>=80 && p<90){
        cout<<"A+";
    }

    else if(p>=60 && p<80){
        cout<<"A";
    }

    else if(p>=50 && p<60){
        cout<<"B";
    }
    else if(p>=30 && p<50){
        cout<<"C";
    }
    
    else{
        cout<<"F";
    }
    return 0;
}