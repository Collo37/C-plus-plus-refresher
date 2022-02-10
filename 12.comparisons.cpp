#include <iostream>

using namespace std;

int findMax(int firstNumber, int secondNumber) {
    if(firstNumber > secondNumber) {
        return firstNumber;
    }else if (secondNumber > firstNumber) {
        return secondNumber;
    } else {
        return 0;
    }
}

int main() {
    cout << findMax(21, 20) << endl;
    cout << findMax(0, 20) << endl;
    cout << findMax(20, 20) << endl;

    return 0;
}