#include<iostream>
#include<cmath>
using namespace std;

bool checkArmstrong(int n){
    int original = n;
    int sum = 0;
    int lastdigit = 0;
    int power = log10(n) + 1;

    while(n > 0){
        lastdigit = n % 10;

        int p = 1;
        int m = 1;
        while(m <= power){
            p = p * lastdigit;
            m++;
        }

        sum = sum + p;
        n = n / 10;
    }

    if(sum == original) return true ;
    else return false ;
}


int main(){

    int n;
    cout<<"Enter the number at least two digit or more= ";
    cin>>n;
    bool result=checkArmstrong(n);
    
    cout << boolalpha << result;



    return 0;
}