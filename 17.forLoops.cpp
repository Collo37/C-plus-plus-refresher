#include <iostream>

using namespace std;

int exponent(int target, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= target;
    };

    return result;
}

int main() {
    int integers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for(int i = 0; i < 10; i++) {
        cout << integers[i] << endl;
    };

    cout << exponent(3, 2) << endl;

    return 0;
};