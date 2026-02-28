#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper Part
    for(int i = 0; i < n; i++) {

        // Leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Inner spaces
            for(int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // Bottom Part
    for(int i = n - 2; i >= 0; i--) {

        // Leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Inner spaces
            for(int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}