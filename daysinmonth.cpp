#include <iostream>
#include <time.h>

//Class called 'DaysInMonth' which holds the private member variables and the global member functions.
class DaysInMonth {
private:   //Private member variables and one private member functions.
	std::string months[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int userMonth, userYear;
	struct tm currentTime;   //A time struct which holds all the current time data variables.
	void getUserValues();   //Calls the 'getUserValues' function.
public:   //Public member functions and a constuctor.
	DaysInMonth() {   //Defult constructor which calls the 'getUserValues' and 'printDaysInMonth'.
		getUserValues();
		printDaysInMonth();
	}
	//Three prototype functions within 'DaysInMonth' class.
	bool isLeap(int);   
	void getCurrentTime();
	void printDaysInMonth();
};
int main()
{
	DaysInMonth daysInMonth;   //Creating a object in claass 'DaysInMonth' called 'daysInMonth'.
}

//getUserValues function which gets the entered user values for the month and year.
void DaysInMonth::getUserValues() {
	do {
		std::cout << "Enter month and year: ";
		std::cin >> userMonth >> userYear;
	} while (userMonth < 0 || userMonth > 12);   //Do while to check if the entered month is between 0 and 12.
}

//isLeap function which check if the year is a leap year and will return true if it is.
bool DaysInMonth::isLeap(int year) {
	//First checks if 'year' is divisable by four, or it will check if 'year' is divisable by 100 and 400.
	return (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) ? true : false;
}

//getCurrentTime function which will get the PC's current time.
void DaysInMonth::getCurrentTime() {
	time_t now = time(NULL);
	localtime_s(&currentTime, &now);   //Gets the local time and stores the variables in the 'currentTime' struct.
}

//printDaysInMonth which will either print the current days in month or the users days in month.
void DaysInMonth::printDaysInMonth() {
	if (userMonth == 0 && userYear == 0) {   //If the 'userMonth' and 'userYear' is equal to zero.
		getCurrentTime();   //Gets the current time.
		daysInMonth[1] = (isLeap(currentTime.tm_year + 1900) == true) ? 29 : 28;   //If it is a leap year will add one to feb's days.
		std::cout << "\nThe current month, " << months[currentTime.tm_mon] << " " << currentTime.tm_year + 1900 << ", has " << daysInMonth[currentTime.tm_mon - 1] << " Days.\n";
		return;
	}
	else if (userYear > 0 && userMonth > 0) {   //Else if to see if 'userYear' and 'userMonth' is greater than zero.
		daysInMonth[1] = (isLeap(userYear) == true) ? 29 : 28;   //If it is a leap year will add one to feb's days.
		std::cout << "\n" << daysInMonth[userMonth - 1] << " Days.\n";
	}
}