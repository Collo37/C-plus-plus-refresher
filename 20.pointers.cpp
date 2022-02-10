#include <iostream>

using namespace std;

int main() {

    int age = 21;
    double gpa = 2.7;
    string name = "Collins";

    int *pAge = &age; // pointer variable

    cout << "Age: " << &age << endl;
    cout << "Age pointer: " << pAge << endl;

    // dereferencing a pointer

    cout << "Dereferrenced age pointer: " << *pAge << endl;
    cout << "Dereferrenced gpa pointer: " << *&gpa << endl;

    return 0;
}