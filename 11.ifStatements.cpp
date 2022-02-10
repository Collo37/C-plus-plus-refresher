#include <iostream>

using namespace std;

int main() {
    bool isMale = false;
    bool isTall = false;
    
    if(isMale && isTall) {
        cout << "You are a tall male." << endl;
    }else if (isMale && !isTall) {
        cout << "You are not a tall male" << endl;
    } else if (!isMale && isTall) {
        cout << "You are tall and not male" << endl;
    } else {
        cout << "You are neither tall nor male" << endl;
    }

    return 0;
}