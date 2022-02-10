#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        };

        void makeSalad() {
            cout << "The chef makes salad" << endl;
        };

        void makeSpecialDish() {
            cout << "The chef makes barbeque ribs" << endl;
        };
};

class ItalianChef: public Chef {
    public:
        string specialty = "Spaghetti";
        void makePasta() {
            cout << "The chef makes incredible pasta" << endl;
        };

        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        };
};

int main() {

    Chef chef;
    ItalianChef italianChef;

    chef.makeSpecialDish();
    italianChef.makeSpecialDish();

    return 0;
};