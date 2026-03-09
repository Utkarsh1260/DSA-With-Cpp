#include <iostream>
using namespace std;

/* ---------------- PASS BY VALUE ----------------
   In pass by value, a COPY of the variable is sent
   to the function.
   Changes made inside the function DO NOT affect
   the original variable.
*/
void passByValue(int x) {
    x = x + 10;   // modifies the copy only
    cout << "Inside passByValue function: x = " << x << endl;
}


/* ---------------- PASS BY REFERENCE ----------------
   In pass by reference, the ORIGINAL variable
   is sent using reference (&).
   Changes made inside the function WILL affect
   the original variable.
*/
void passByReference(int &x) {
    x = x + 10;   // modifies original variable
    cout << "Inside passByReference function: x = " << x << endl;
}


int main() {

    int num = 5;

    cout << "Original value before passByValue: " << num << endl;
    passByValue(num);
    cout << "Value after passByValue: " << num << endl;

    cout << "\nOriginal value before passByReference: " << num << endl;
    passByReference(num);
    cout << "Value after passByReference: " << num << endl;

    return 0;
}