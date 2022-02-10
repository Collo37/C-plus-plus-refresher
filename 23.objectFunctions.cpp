// also referred to as instance functions

#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        Student(string studentName, string studentMajor, double studentGpa) {
            name = studentName;
            major = studentMajor;
            gpa = studentGpa;
        };

        bool hasHonors() {
            if(gpa >= 3.5) {
                return true;
            };
            return false;
        };
};

int main() {

    Student student1("Collins", "Computer Technology", 3.5);
    Student student2("Derrick", "Business", 2.6);

    cout << student1.name << endl;
    cout << student2.name << endl;
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
};