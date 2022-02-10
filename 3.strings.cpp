#include <iostream>

using namespace std;

int main() {
    string name = "Collins Oduor";

    cout << name << endl;

    // string methods
    cout << name.length() << endl;
    cout << name[name.length() - 1] << endl;
    cout << name.find("Oduor") << endl; // return the starting index of the find argument
    cout << name.substr(8, name.length() - 1) << endl;
    
    return 0;
}