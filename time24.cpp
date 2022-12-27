#include <iostream>
#include <iomanip>

//Start of class called 'Time24'.
class Time24 {
private:
    short int seconds, mins, hours;   //Three integer variables within the private section. Only accesable within class.
public:

    //Defult Constuctor will set all variables to zero.
    Time24() {
        seconds = 0, mins = 0, hours = 0;
    };

    //Other Constuctor will allow user to set the variables.
    Time24(int hours, int mins, int seconds) {
        this->seconds = (seconds >= 0 && seconds <= 59) ? seconds : 0;   //Checks if seconds number is between 0 and 59.
        this->mins = (mins >= 0 && mins <= 59) ? mins : 0;   //Checks if the minutes number is between 0 and 59.
        this->hours = (hours >= 0 && hours <= 23) ? hours : 0;   //Checks if the hours number is between 0 and 23.
    }

    //Three functions to allow user to get numbers within variables outside of class.
    int getSeconds() {
        return seconds;
    }
    int getMins() {
        return mins;
    }
    int getHours() {
        return hours;
    }

    //Greeting function depending on time of day, it will greet you in different ways.
    void greeting() {
        if ((hours >= 6) && (hours <= 11 && mins <= 59 && seconds <= 59)) {
            std::cout << "Good Morning";   //Greets 'Good Morning' to console.
        }
        else if ((hours >= 12) && (hours <= 17 && mins <= 59 && seconds <= 59)) {
            std::cout << "Good Afternoon";   //Greets 'Good Afternoon' to console.
        }
        else if ((hours >= 18) && (hours <= 22 && mins <= 59 && seconds <= 59)) {
            std::cout << "Good Evening";   //Greets 'Good Evening' to console.
        }
        else if ((hours <= 5 && mins <= 59 && seconds <= 59) || (hours = 23)) {
            std::cout << "Time to sleep";   //Greets 'Time to sleep' to console.
        }
    }

    //Function to print time in 24-Hour format (HH:MM:SS) to console.
    void printTime24() {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":" 
            << std::setw(2) << mins << ":" << std::setw(2) << seconds << std::setfill(' ');
    }

    //Function to print time in 12-hour format (HH:MM:SS AM/PM) to console.
    void printTime12() {
        int tempHour = (hours > 12) ? hours - 12 : hours;   //Will convert the hour into the 12-hour format.
        char amPm = (hours >= 12) ? 'P' : 'A';   //Works out if its AM or PM.
        //Prints the 12-Hour time to console.
        std::cout << std::setw(2) << std::setfill('0') << tempHour << ":" 
            << std::setw(2) << mins << ":" << std::setw(2) << seconds << " " 
            << amPm << "M" << std::setfill(' ');
    }
};

int main()   //Start of main function.
{
    short int hour, min, sec;   //Temp integer variables for time.

    std::cout << "Please enter the time in 24-Hour format (Hour, Minute, Second):\n";
    std::cin >> hour >> min >> sec;   //Gets the entered time and stores into the temporary variables.

    Time24 time(hour, min, sec);   //Creates a time object with the temporary variables.

    std::cout << "12-hour format: ";
    time.printTime12();   //Calls the print 12-Hour time function from class.
    std::cout << "\n24-hour format: ";
    time.printTime24();   //Calls the print 24-Hour time function from class.
    std::cout << "\n";
    time.greeting();   //Calls the greeting function from class.
}   //End of main function.