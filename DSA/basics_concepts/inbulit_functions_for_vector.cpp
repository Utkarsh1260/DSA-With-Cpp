#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    // push_back() - add elements to the end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    // size() - get number of elements
    cout << "Size of vector: " << v.size() << endl;
    
    // front() - access first element
    cout << "Front element: " << v.front() << endl;
    
    // back() - access last element
    cout << "Back element: " << v.back() << endl;
    
    // at() - access element at specific index
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "Element at index 2: " << v.at(2) << endl;
    
    // Display all elements
    cout << "All elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}