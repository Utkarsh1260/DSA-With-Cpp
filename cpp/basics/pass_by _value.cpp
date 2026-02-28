#include <iostream>
using namespace std;


int sum(int a, int b){
    int s=a+b;
    return s;
}


int main()
 {

    int a=2, b=3;
    int s=sum(a,b); // It is pass by value because we are passing the value of a and b as a copy to function sum and not the reference of a and b means any changes in a and b at function side will not affect the value of a and b at main function 
    cout<<s;

  return 0;
}