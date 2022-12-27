#include <iostream>

#define MAX 10   //Define for the max ammount of student percentages.

unsigned int studentGrades[MAX] = { 0 };   //Unsigned Array for storing the percentages, uses 'MAX' for the size.

short int getGrades();   //Prototype for a unsigned int function called 'getGrades'.

int main()   //Start of main function. 
{
    short int tempCount = getGrades();   //Temp variable for the returned value of function.
    //Using std::cout to output the infomation to the console.
    std::cout << "\nThe scores you entered include " << tempCount << " percentages over 50.\n";
}   //End of main function.

//Function called 'getGrades' which is returns a short int value.
short int getGrades() {
    short int count = 0;   //Short int variable for the count of percentages about 50%.
    std::cout << "Please enter 10 student grades between 0% and 100%:\n";
    for (short int i = 0; i < MAX; i++) {    //For loop which will count from 0 to what ever 'MAX' is.
        do {
            std::cin >> studentGrades[i];   //Using std::cin to get the entered values.
            //Do while which will check if the value is not between 0 and 100, if not will loop around again.
        }  while (!(studentGrades[i] >= 0 && studentGrades[i] <= 100));
        //If to check if the student grade entered is above 50%. If true will add 1 to count variable.
        count = (studentGrades[i] > 50) ? count = count + 1 : count;
    }
    return count;   //Returns 'count'.
}