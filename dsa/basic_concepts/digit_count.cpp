#include <iostream>
using namespace std;
#include <cmath>

int count(int n) {
    if(n == 0) return 1;

    else
    return log10(n) + 1;
}

int main(){
    int n;
    cin>>n;
    int result=count(n);
    cout<<result;
    return 0; 
}