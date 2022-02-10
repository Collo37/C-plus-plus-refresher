#include <iostream>

using namespace std;

int main() {
    string color, pluralNoun, celebrity;
    
    cout << "enter a color" << endl;
    getline(cin, color);
    cout << "enter a plural noun" << endl;
    getline(cin, pluralNoun);
    cout << "enter a celebrity name" << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout <<  pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}