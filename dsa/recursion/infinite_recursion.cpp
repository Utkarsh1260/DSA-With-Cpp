#include<iostream>
using namespace std;

void repeat(){
    cout<<"I am infinite recursion"<<endl;
    repeat();
}


int main(){
    


    repeat();

    return 0;
}