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
    cout<<"It's upper-case"<<endl;
   }


   //Other method to check using is ASCII value
   cout<<"Using ASCII value"<<endl;
   if(ch>=65 && ch<=90){ // Implicit type conversion done by compiler from A to int(its ASCII Value)
    cout<<"Character is Upper-case";
   }

    else if(ch>=97 && ch<=122){ // Implicit type conversion done by compiler from A to int(its ASCII Value)
    cout<<"It's Lower-case";
   }

   else{
    cout<<"Number";
   }
    return 0;
}