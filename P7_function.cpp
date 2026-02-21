#include <iostream>
using namespace std;


//no return function that is void functin that does not return anything
void printno(){
    cout<<"I am void function and I do not return anything because my return type is void\n";

}

//function that return something
int returnsomething(){
    cout<<"I am function that return int value\n";
    return 3;
}



int main() {
int n;

//calling void function or function invoking
printno();

// calling int function that returns int value
int value=returnsomething(); // or use cout<<returnsomething();
cout<<"I am 3 reutrned by returnsomething function= "<<value;
cout<<returnsomething();

    return 0;
}