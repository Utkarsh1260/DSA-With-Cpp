// Program to find the largest element in the given array

#include<iostream>
#include<vector>
using namespace std;


int largestElement(vector<int> &arr, int n) {
    int largest=arr[0];
    for(int i=0; i<n; i++) if(arr[i]>largest) largest=arr[i];
    return largest;
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
    int max = largestElement(arr, n);
    cout<<"So largest element is = "<<max<<endl;
}
    return 0;
}



/* Time and Space Complexity analysis

--> Time Complexity 
O(n)

--> Space Complexity
Function → O(1) 

*/




/* Test Cases (10) -:

5
1 1 2 2 3
5
1 2 3 4 5
5
7 7 7 7 7
1
10
8
1 1 1 2 2 3 3 3
6
-3 -3 -2 -1 -1 0
7
1 1 2 3 3 4 5
6
1 2 3 4 4 4
6
2 2 2 3 4 5
6
5 5 5 6 6 6

*/









