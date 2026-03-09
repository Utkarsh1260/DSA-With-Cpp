#include<iostream>
using namespace std;

int count=0;
void repeat(){
   
    if(count==3) return;
     cout<<"I have base condition "<<count<<endl;
    count++;
    repeat();
}


int main(){
    


    repeat();

    return 0;
}