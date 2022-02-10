#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "No title";
            author = "No author";
            pages = 0;
        }

        Book(string bookTitle, string bookAuthor, int bookPages) {
            title = bookTitle;
            author = bookAuthor;
            pages = bookPages;
        };
};

int main() {
    
    Book book1("The River and the Source", "Margaret Ogolla", 341);
    Book book2("The 48 laws of power", "Robert Greene", 1621);

    book2.pages = 1651;

    cout << book1.author << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}