#include<iostream>
#include<vector>
using namespace std;


int isSorted(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++)   if(!(arr[i+1]>=arr[i])) return false;
    return true;
}


int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);}
    int result=isSorted(arr, n);
    cout<<result;



    return 0;
}