// Program to remove duplicate elements from the given vector and return it

#include<iostream>
#include<vector>
#include<set>
using namespace std;


vector<int> removeDuplicates(vector<int>& nums) {
    set<int> st(nums.begin(), nums.end());   
    vector<int> unique(st.begin(), st.end()); 
    return unique;
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
    vector<int> unique_array = removeDuplicates(arr);
    cout <<"original size= "<<n<<", "<<"unique= "<<unique_array.size()<<endl;

    for(int i=0; i<unique_array.size(); i++){
        cout<<unique_array[i]<<" ";
    }
    cout<<endl;
}

    return 0;
}



/* Time and Space Complexity analysis

--> Time Complexity
since insertion in set takes O(log n) and vector insertion in vector takes O(n)
so all cases TC  is O(n logn)


--> Space Complexity-:
Function → O(n) becasue set and vector is storing n unique elements
Overall program → O(n)

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