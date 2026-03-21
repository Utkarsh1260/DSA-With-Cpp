// Program to remove dubplicates from the given array
#include<iostream>
#include<vector>
using namespace std;


    int removeDuplicates(vector<int>& nums) {
        int unique=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
                 nums[unique]=nums[i];
                 unique++;
        }
          i++;
        }
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
    int k = removeDuplicates(arr);
    cout <<"original size= "<<n<<", "<<"unique= "<<k<<endl;;
}

    return 0;
}


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
5 5 5 6 6 6 8 8 */