#include <iostream>
using namespace std;


int sumtwono(int a,int b){ // a and b are parameter as input taken by function
 int s=a+b;
 return s;
}


int main()
 {

int sum= sumtwono(2,3); //2 and 3 are the argument passed to function
cout<<sum;

  return 0;
}