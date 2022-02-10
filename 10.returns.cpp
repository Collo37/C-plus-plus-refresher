#include <iostream>
#include <cmath>

using namespace std;

int power(int number, int coefficient) {
    return pow(number, coefficient);
}

int main() {

    cout << power(3, 3) << endl;
    cout << power(2, 3) << endl;

    return 0;
}