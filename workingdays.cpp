#include <iostream>
#include <string>

bool isLeap(unsigned int);   //Prototyping the function.

int main()
{
    unsigned int year, holidays;   //Declering two variables for the year and holidays.
    std::cout << "Please enter a year and ammount of holidays:\n";   //Outputing to console.
    std::cin >> year >> holidays;   //Using std::cin to get two enter values.
    short int days = (isLeap(year) == true) ? 366 : 365;   //Small if to check if the isLeap function was true.

    //Will print all the infomation out to the console.
    std::cout << "\nTotal days in the year " << year << ": " << days << "\nThere are " << holidays << " holidays"
        << "\nThere are 52 Sundays\nthere are " << days - holidays - 52 << " working days";
}

//Function with a small if to see if the year is a leap year. Will return true or false.
bool isLeap(unsigned int year) {
    return (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) ? true : false;
}