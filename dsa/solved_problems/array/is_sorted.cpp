// Program to check whether the given vector is sorted or not

#include<iostream>
#include<vector>
using namespace std;


int isSorted(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++)   if(!(arr[i+1]>=arr[i])) return false;
    return true;
}


int main(){
for(int i=1; i<=10; i++)
{


    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int result=isSorted(arr, n);

    bool boolean = result;
    cout << "array size is = " << n;
    cout << ", array is sorted = " <<boolean<<" ("<<boolalpha << boolean<<")";

    cout<<endl;
}

    return 0;
}

/* Time and Space Complexity analysis

--> Time Complexity
Best case O(1)
if vector is empty or have only one element Loop runs 0 or 1 time
Avg and Worst case O(n)


--> Space Complexity
Function → O(1)

*/




/* Test Cases(10)

1
5
5
1 2 3 4 5
5
5 4 3 2 1
4
7 7 7 7
6
1 2 2 3 4 4
5
1 2 5 3 4
5
1 2 3 5 4
5
-5 -3 -1 0 2
5
-2 -1 3 2 4
0

*/