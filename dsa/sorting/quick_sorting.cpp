#include<iostream>
#include<vector>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(i <= high - 1 && arr[i] <= pivot){
            i++;
        }
        while(j >= low + 1 && arr[j] > pivot){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    vector<int> arr = {5, 2, 3, 1};
    vector<int> sorted = quickSort(arr);

    for(int x : sorted){
        cout << x << " ";
    }
    return 0;
}
//works on divide and conqer rule
// Tc is O(n * log2 n)
// SC is O(1)
