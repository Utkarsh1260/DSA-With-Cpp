#include<iostream>
using namespace std;

int main(){
  char ch='A';

  int x=ch; // implicit conversion from char to int
  cout<<"The ASCII value of "<<ch<<" is "<<x<<endl;
    return 0;
}