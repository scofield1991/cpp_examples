#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movie_t
{
    string name;
    int year;
};

void print_movie(movie_t* movie);

int main()
{
    string mystr;
    movie_t my_movie;
    movie_t* pmovie;
    pmovie = &my_movie;

    cout << "Enter a name of movie: ";
    getline(cin, pmovie->name);
    cout << "\nEnter a year of movie: ";
    getline(cin, mystr);
    stringstream(mystr) >> pmovie->year;

    print_movie(pmovie);
    return 0;
}

void print_movie(movie_t* movie)
{
    cout << movie->name << " " << movie->year;
}


