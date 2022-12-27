// monthlyincome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   //Including the "iostream" library to use console.

int main()   //Start of the main function.
{
    int basicWage = 5000, bonus = 0, medicalAllowance = 0;   //Decleration of the needed local variables. 
    bonus = basicWage * 0.55;   //Calculating the bonus which is 55% of basic wage.
    medicalAllowance = basicWage * 0.125;   //Calculating the medical allowance which is 12.5% of basic wage.
    std::cout << "Basic Pay is $" << basicWage << "\nBonus is $" << bonus << "\nMedical Allowance is $" << medicalAllowance << "\nTotal is $" << basicWage + bonus + medicalAllowance << "\n";   //Outputing all of the different calculating variables to the console.
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
