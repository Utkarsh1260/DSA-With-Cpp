#include <iostream>
#include <cstring>
using namespace std;

void printSubsequences(char input[], string out = "") {
    if(strlen(input) == 0) {
        cout << out << endl;
        return;
    }

    printSubsequences(input + 1, out);
    printSubsequences(input + 1, out + input[0]);
}

int main() {
    char input[100];
    cin >> input;

    printSubsequences(input);

    return 0;
}