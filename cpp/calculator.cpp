#include<iostream>
using namespace std;

int main(){
    double n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;

    cout<<"Select which operation to perform: "<<endl;
    cout<<"1. Addition(+)"<<endl;
    cout<<"2. Subtraction(-)"<<endl;
    cout<<"3. Multiplication(X)"<<endl;
    cout<<"4. Division(/)"<<endl;
 

int choice;
cout << "Enter your choice: ";
cin >> choice;


if(choice==1){
    cout<<"Sum is= "<<n1+n2;
}

if(choice==2){
    cout<<"Substraction= "<<n1-n2;
}

if(choice==3){
    cout<<"Multiplication= "<<n1*n2;
}

if(choice==4){
    cout<<"Division "<<n1/n2;
}


    
return 0;
}