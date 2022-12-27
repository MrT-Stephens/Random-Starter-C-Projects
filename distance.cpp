// distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

int main()   //Start of main function.
{

    int speedMph, hours;   //Declering int variables.

    //Using std::cout to output info to console and std::cin to get the entered numbers.
    std::cout << "What is the speed of the vehicle in mph? ";
    std::cin >> speedMph;
    std::cout << "\nHow many hours has it travelled? ";
    std::cin >> hours;
    std::cout << "\nHour  Miles Travelled" << "\n" << std::setfill('-') << std::setw(27) << "\n" << std::setfill(' ');

    //For loop to output the hours and distance traveled using the lengh equation to keep them all in a perfect line.
    for (int c = 1; c <= hours; c++) {
        int length, distance = speedMph * c;
        length = ((std::to_string(distance).length()) - (std::to_string(c).length())) + 6;
        std::cout << c << std::setw(length) << std::right << distance << "\n";
    }
}   //End of main function.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
