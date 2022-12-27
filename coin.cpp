// coin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>

int main()   //Start of main function.
{
    char coin;   //Declering char variable for the side of the coin.
    std::cout << "Please enter 'H' for heads and 'T' for tails:  ";   //Using std::cout to output info to console.
    std::cin >> coin;   //Using std::cin to get the entered character.
    srand(time(0));   //Makes the rand() work correctly.
    int random = rand() % 2;   //Using rand() to generate a random number thats either 0 or 1.
    std::string result = ((random == 1 && coin == 'H') || (random == 0 && coin == 'T')) ? "\nYou Win\n" : "\nYou Lose\n";
    /*   ^^^  Short if statment to see if the random number is equal to 1 and if the coin is equal to H or
    *         if the random number is equal to 0 and if the coin is equal to T. If this is true then it will 
              make the string equal to You win and if not true will equal You Lose.   */
    std::cout << result;   //Using std::cout to output result to console.
}   //End of mian function.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
