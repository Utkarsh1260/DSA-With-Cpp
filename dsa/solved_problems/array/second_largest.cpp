//Program to find the second largest element in the given array

#include<iostream>
#include <climits>
#include<vector>
using namespace std;


int secondlargest(vector<int> &a, int n){
    int largest=a[0];
    int second_largest=-1;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            second_largest=largest;
            largest=a[i];
        }

        else if(a[i]< largest && a[i]> second_largest){
            second_largest=a[i];
        }
    }
    return second_largest;
}

int secondsmallest(vector<int> &a, int n){
    int smallest=a[0];
    int second_smallest=INT_MAX;
    for(int i=1; i<n; i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }

        else if(a[i]!=smallest && a[i]< second_smallest){
            second_smallest=a[i];
        }
    }
    if(second_smallest == INT_MAX) return -1;
    return second_smallest;
}





int main(){

for(int i=1; i<=10; i++)
{
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int second_largest = secondlargest(a, n);
    cout<<endl;
    int second_smallest = secondsmallest(a, n);
    cout<<"So second_largest element is = "<<second_largest<<endl;
    cout<<"So second_smallest element is = "<<second_smallest<<endl;
}
    return 0;
}




/* Time and Space Complexity analysis

--> Time Complexity:
secondlargest → O(n)
secondsmallest → O(n)


--> Space Complexity:
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