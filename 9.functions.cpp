#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "hello " << name << ". You are " << age << endl;
}

int main() {
    sayHi("Collins", 21);
    sayHi("Derrick", 20);
    sayHi("Oduor", 22);

    return 0;
}