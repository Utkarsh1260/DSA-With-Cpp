#include<iostream>
#include <utility>
using namespace std;

int main(){

    pair<int, int> p={1,2};
    cout<<p.first <<" & " <<p.second <<endl;

    pair<int, pair<int, int>> q={1,{2,3}};
    cout<<q.first <<" & " <<q.second.first <<" & " <<q.second.second;


    pair<int, int> arr[]={{1,2},{3,4},{5,6}};
    cout<<endl;
    cout<<arr[1].second;


    return 0;
}