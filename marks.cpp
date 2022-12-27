// marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()   //Start of main function.
{
    float marks[3] = { 0 };   //Declering the float array for the marks. 
    std::cout << "Please enter the three different marks in %.\n";   //Using the std::cout to output infomation to console.
    std::cin >> marks[0] >> marks[1] >> marks[2];   //Using std::cin to take inputs from keyboard and store in the array.
    std::cout << std::fixed << std::setprecision(2);   //Using std::fixed and std::setprecision to only output to 2 decimal places.
    std::cout << "Average mark is " << (marks[0] + marks[1] + marks[2]) / 3 << "%\n";   //Using std::cout to output average marks to the console.
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
