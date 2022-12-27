#include <iostream>
#include <iomanip>
#include <string>

//Struct defined call 'MovieData'.
struct MovieData {
private:
    void getMovieInfo();   //Protyping function which is private within class.
public:
    MovieData() {   //Contructor which will call function.
        getMovieInfo();   //Calling 'getMovieInfo()'.
    };

    //Declering all the variables needed.
    std::string title;   
    std::string director;
    int yearReleased;
    int runTimeMins;
    long long productionCost;
    long long firstYearRev;
} ;

void displayInfo(MovieData&);   //Prototyping the function.

int main()
{
    MovieData movie1;   //Creating a MovieData object called 'movie1'.
    MovieData movie2;   //Creating a MovieData object called 'movie2'.

    displayInfo(movie1);   //Passing the 'movie1' object into the 'displayInfo()' function.
    displayInfo(movie2);   //Passing the 'movie2' object into the 'displayInfo()' function.
}

//Function which will display all the infomation from the passed in stuct object.
void displayInfo(MovieData &movie) {
    std::cout << "\nMovie Title: " << movie.title << "\nDirector: " << movie.director 
        << "\nRelease Year: " << movie.yearReleased << "\nRun Time: " << movie.runTimeMins 
        << "\nProfit: $" << movie.firstYearRev - movie.productionCost << "\n";
}

//Function which is private within struct 'MovieData' and it will get the movie infomation.
void MovieData::getMovieInfo() {
    std::cout << "Enter Movie name: ";
    std::getline(std::cin, title);
    std::cout << "Enter movie director: ";
    std::getline(std::cin, director);
    std::cout << "Enter year released: ";
    std::cin >> yearReleased;
    std::cout << "Enter movie run time in minutes: ";
    std::cin >> runTimeMins;
    std::cout << "Enter production costs in $: ";
    std::cin >> productionCost;
    std::cout << "Enter the first year revenue in $: ";
    std::cin >> firstYearRev;
    std::cin.ignore(1000, '\n');
}