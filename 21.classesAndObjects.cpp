#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {
    
    Book book1;
    Book book2;

    book1.title = "The River and the Source";
    book1.author = "Margaret Ogolla";
    book1.pages = 341;

    book2.title = "The 48 Laws of power";
    book2.author = "Robert Greene";
    book2.pages = 1621;

    cout << book1.author << endl;
    cout << book2.author << endl;

    return 0;
}