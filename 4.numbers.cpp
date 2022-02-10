#include <iostream>

using namespace std;

int main() {
    int age = 22;
    cout << age % 5 << endl; // modulus
    // C++ adheres to BODMAS order of operations
    cout << 4 + 4 * 4 << endl;
    // Increment and decrement
    age += 2;
    cout << age << endl;

    age--;
    cout << age << endl;

    return 0;
}