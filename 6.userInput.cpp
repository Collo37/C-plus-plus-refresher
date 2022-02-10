#include <iostream>

using namespace std;

int main() {
    string firstName, lastName;

    cout << "What is your first name?" << endl;
    getline(cin, firstName);

    cout << "What is your last name?" << endl;
    getline(cin, lastName);

    cout << "Your name is " << firstName << " " << lastName << endl;

    return 0;

}