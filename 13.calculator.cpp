#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber, result;
    char operator;

    cout << "Enter the first number" << endl;
    cin >> firstNumber;

    cout << "Enter the operator" << endl;
    cin >> operator;

    cout << "Enter the second number" << endl;
    cin >> secondNumber;

    if (operator == "+") {
        result = firstNumber + secondNumber;
    } else if(operator == "-") {
        result = firstNumber - secondNumber;
    } else if(operator == "*") {
        result = firstNumber * secondNumber;
    } else if(operator == "/") {
        result = firstNumber / secondNumber;
    } else {
        cout << "Enter a valid operator" << endl;
    }

    cout << result << endl;

    return 0;
}