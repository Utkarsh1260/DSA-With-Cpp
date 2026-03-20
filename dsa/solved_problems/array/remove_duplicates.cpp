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