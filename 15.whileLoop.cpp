#include <iostream>

using namespace std;

int main() {

    int index = 10;

// while loop
    while(index >= 0) {
        cout << index << endl;
        index -= 1;
    };

// do while loop
    do {
        cout << index << endl;
        index -= 1;
    } while(index >= 0);
    return 0;
};