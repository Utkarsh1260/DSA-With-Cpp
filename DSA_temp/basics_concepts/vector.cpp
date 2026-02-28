#include<iostream>
#include<vector>
using namespace std;

int main(){

// various declaration of vector
// vector<int> v1; // zero length vector
// vector<int> v2(5); // vector of size 5 with default value 0
// vector<int> v3(5, 10); // vector of size 5 with default value 10
// vector<int> v4{1, 2, 3, 4, 5}; // vector initialized with values
// vector<int> v5 = {1, 2, 3, 4, 5}; // another way to initialize vector with values
//

    vector<int> v(5);

    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}