#include <iostream>

using namespace std;

class Movie {

    private:
        string rating;

    public:
        string title;
        string director;
        Movie(string movieTitle, string movieDirector, string movieRating) {
            title = movieTitle;
            director = movieDirector;
            setRating(movieRating);
        };
        
        void setRating(string movieRating) {
            if(movieRating == "G" || movieRating == "PG" || movieRating == "PG-13" || movieRating == "R" || movieRating == "E") {
            rating = movieRating;
            } else {
                rating = "NR";
            }
        };

        string getRating() {
            return rating;
        }
};

int main() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Diabolical");
    
    cout << avengers.getRating() << endl;

    return 0;
};