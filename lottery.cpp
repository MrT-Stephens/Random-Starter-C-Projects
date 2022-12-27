#include <iostream>
#include <math.h>

//Prototyping the functions needed.
unsigned int getUserNumber();
int linearSearch(unsigned int, const unsigned int[]);

int main()
{
    //Used a constant unsigned int variable array for the lottery numbers.
    const unsigned int lotteryNumbers[10] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    if (linearSearch(getUserNumber(), lotteryNumbers) >= 0) {   //If the returned number is > than or equal to 0.
        std::cout << "\nCongratulations, you have won\n";   //Outputs "you have won".
    }
    else {
        std::cout << "\nBetter luck next time\n";   //Outputs "you have not".
    }
}

//getNumber function which will get the users entered number and return it.
unsigned int getUserNumber() {
    unsigned int userNumber = 0;   //Temp variable for the users number.
    std::cout << "Please enter the winning 5 digit number:\n";
    std::cin >> userNumber;   //Gets the user number and stores in variable 'userNumber'.
    return userNumber;   //Returns 'userNumber'.
}

//linearSearch function which will take a 'userNumber' and the array of 'lotteryNumbers' and serch for the 'userNumbers' in array.
int linearSearch(unsigned int userNumber, const unsigned int lotteryNumbers[]) {
    bool found = false;
    int position = -1, i = 0;
    while (i < 10 && found == false) {   //Will loop while i is less than 10 and 'found' equals false.
        if (userNumber == lotteryNumbers[i]) {   //If 'userNumber' is equal to current 'lotteryNumbers'.
            found = true;   //If true equals 'found' to true.
            position = i;   //If true equals 'position' to index.
        }
        i++;   //Adds one to index.
    }
    return position;   //Returns 'position'.
}