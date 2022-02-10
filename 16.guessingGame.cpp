#include <iostream>

using namespace std;

int main() {
    string secretWord = "Secret";
    string guess;
    int guessesLeft = 5;

    while(guessesLeft >= 1) {
        cout << "Guess the secret word: Hint, something you have not told anyone" << endl;
        getline(cin, guess);
        if(guess == secretWord) {
            cout << "Correct guess!!" << endl;
            break;
        } else {
            guessesLeft--;
            cout << "Sorry, try again" << endl;
            cout << "You have " << guessesLeft << " guesses left" << endl;
        }
    }

    return 0;
}