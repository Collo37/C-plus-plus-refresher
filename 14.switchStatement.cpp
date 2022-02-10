#include <iostream>

using namespace std;

string convertToDay(int dayNumber) {
    string dayName;

    switch(dayNumber) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            return "Enter a valid day number (0 to 6)";
    };

    return dayName;
}

int main() {
    cout << convertToDay(3) << endl;
    cout << convertToDay(0) << endl;
    cout << convertToDay(1) << endl;
    cout << convertToDay(7) << endl;

    return 0;
}