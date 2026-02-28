#include <iostream>
using namespace std;

int main() {
   char ch;
   cout<<"Enter the single character= ";
   cin>>ch;

   if(ch>='a' && ch<='z'){
    cout<<"Character is lower-case"<<endl;
   }

   else{
    cout<<"Its upper-case"<<endl;
   }


   //Other method to chekc using is ACII value
   cout<<"Using ASCII value"<<endl;
   if(ch>=65 && ch<=90){ // Implicit type conversion done by compiler from A to int(its ASCII Value)
    cout<<"Character is Upper-case";
   }

    else if(ch>=97 && ch<=122){ // Implicit type conversion done by compiler from A to int(its ASCII Value)
    cout<<"Its Lower-case";
   }

   else{
    cout<<"Number";
   }
    return 0;
}