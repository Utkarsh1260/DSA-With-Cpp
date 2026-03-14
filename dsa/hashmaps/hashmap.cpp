#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    map<int, int> m;
    for(int i=0; i<n; i++){ 
        cin>>arr[i];
        m[arr[i]]++;     //hashmap -processing
    }





    //mapprint
    // for(auto it: m) cout<<it.first<<"->"<<it.second<<endl;


    //queries
    int t;
    cin>>t;

    while(t--){
        int f;
        cin>>f;
         cout<<m[f]<<endl;

    }

    return 0;
}


// map stores in sorted order and TC is O(logn) in all cases