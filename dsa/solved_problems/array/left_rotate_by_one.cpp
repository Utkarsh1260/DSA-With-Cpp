// Program to left rotate the given array by one

#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> &v, int n){
    int temp=v[0];
    for(int i=1; i<n; i++) v[i-1]=v[i];
    v[n-1]=temp;

}

int main(){
for(int i=1; i<=10; i++)
{
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    rotate(v, n);
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
    
}


    return 0;
}




/* Time and Space Complexity analysis

--> Time Complexity 
O(n)

--> Space Complexity-:
Function → O(1) 

*/




/* Test Cases (10) -:

5
1 2 3 4 5
4
10 20 30 40
3
7 8 9
6
1 1 1 1 1 1
1
100
2
5 6
7
9 8 7 6 5 4 3
5
0 -1 -2 -3 -4
8
2 4 6 8 10 12 14 16
3
100 200 300

*/