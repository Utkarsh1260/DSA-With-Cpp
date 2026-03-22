// Program to left rotate the given array by k places

#include<iostream>
#include<vector>
using namespace std;


/* 

Example:
arr = {10, 20, 30, 40}, n = 4, k = 3
Output: {40, 10, 20, 30}

*/


void rotate(vector<int> &arr, int n, int k)
{
  vector<int> temp;

   // Step 1: Store first k elements to temp array
  for(int i=0; i<k; i++)  temp.push_back(arr[i]);

   // Step 2: Shift remaining elements to left
  for(int i=k; i<n; i++) arr[i-k]=arr[i];

  // Step 3: Place stored elements at end of original array
  for(int i=n-k; i<n; i++) arr[i]=temp[i-(n-k)];
}



int main()
{

for(int i=1; i<=10; i++) // No. of test cases is 10
{
    int n;  
    cin>>n; // size of array

    int k;
    cin>>k; // number of left rotations
    
    vector<int> arr;
    for(int i=0; i<n; i++)  // input array elements
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }



    rotate(arr, n, k); // rotate function invocation 
    for(int i=0; i<n; i++) cout<<arr[i]<<" "; // display rotated array
    cout<<endl;
    
}
 return 0;
}




/* Time and Space Complexity analysis

--> Time Complexity 
O(n)

--> Space Complexity-:
Function → O(k) 

*/




/* Test Cases (10) -:

n - size of array
k - no of rotation
[] - elements of array


4  
3 
10 20 30 40
5 
2 
1 2 3 4 5
3 
1 
7 8 9
6 
4 
1 1 1 1 1 1
1 
0 
100
2 
1 
5 6
7 
3 
9 8 7 6 5 4 3
5 
2 
0 -1 -2 -3 -4
8 
5 
2 4 6 8 10 12 14 16
3 
1 
100 200 300

*/