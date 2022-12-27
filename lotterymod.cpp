#include <iostream>
#include <math.h>

//Prototyping the functions needed.
unsigned int getUserNumber();
int binarySearch(unsigned int, unsigned int[]);

int main()
{
    //Used a constant unsigned int variable array for the lottery numbers.
    unsigned int lotteryNumbers[10] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    if (binarySearch(getUserNumber(), lotteryNumbers) >= 0) {   //If the returned number is > than or equal to 0.
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

//binarySearch function which will take a 'userNumber' and the array of 'lotteryNumbers' and serch for the 'userNumbers' in array.
int binarySearch(unsigned int userNumber, unsigned int lotteryNumbers[]) {
    //Will sort the array numbers into accending order.
    int arraySize = 10;   //Array Size.
    bool swapMade = false;
    do {
        swapMade = false;
        for (int i = 0; i < arraySize; i++) {   //For loop which loops from 0 to 'arraySize'.
            if (lotteryNumbers[i] > lotteryNumbers[i + 1]) {   //Checks if the current 'lotteryNumber' is > the next 'lotteryNumber'.
                std::swap(lotteryNumbers[i], lotteryNumbers[i + 1]);   //If true swaps the current 'lotteryNumber' with the next 'lotteryNumber'
                swapMade = true;
            }
        }
    } while (swapMade);   //Will loop while 'swapMade' is true.

    //Will use a binary search to see if the users number is within the array.
    int first = 0,
        last = arraySize - 1,
        middle, position = -1;
    bool found = false;
    while (!found && first <= last) {   //Loops while 'found' is false and 'first' is less or equal to 'last'.
        middle = (first + last) / 2;   //Works out the middle of the array.
        if (lotteryNumbers[middle] == userNumber) {   //Checks if the 'userNumber' is equal to the middle 'lotteryNumbers'.
            found = true;   //If ture sets 'found' to true.
            position = middle;   //If true sets position to middle.
        }
        else if (lotteryNumbers[middle] > userNumber) {   //Checks if the middle 'lotteryNumber' is less than 'userNumber'.
            last = middle - 1;   //If true will equal 'last' to 'middle' minus one.
        }
        else {
            first = middle + 1;   //If not true will equal 'first' to 'middle' plus one.
        }
    }
    return position;   //Returns 'position'.
}