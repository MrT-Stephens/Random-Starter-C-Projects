// population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()  //Start of main function.
{
    long long population = 7700000000, popIncreased = 0;   //Declering variables. Using long long so it can hold such large numbers.
    popIncreased = (population * 0.1) + population;   //Calculating the first increase which is 10%. 
    std::cout << "The world population is " << population << "\nif the world population rose by 10% it would be " << popIncreased;   //Outputing infomation to console and the population when increased by 10%.
    popIncreased = (population * 0.15) + population;  //Calculating the second increase which is 15%. 
    std::cout << "\nif the world population rose by 15% it would be " << popIncreased;   //Outputing infomation to console and the population when increased by 15%.
    popIncreased = (population * 0.20) + population;  //Calculating the third increase which is 20%. 
    std::cout << "\nif the world population rose by 20% it would be " << popIncreased;   //Outputing infomation to console and the population when increased by 20%.
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
