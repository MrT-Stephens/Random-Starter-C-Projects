// budget.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()   //Start of main function.
{
    float rent, internet, gas, electrisity, water;   //Declering float variables as could be working in decimals.
    std::cout << "Enter monthy costs for the following:\n" << "Rent or morgage: $";   
    std::cin >> rent;
    std::cout << "Internet: $";
    std::cin >> internet;
    std::cout << "Gas: $";
    std::cin >> gas;
    std::cout << "Electrisity: $"; 
    std::cin  >> electrisity;
    std::cout << "Water: $";
    std::cin >> water;
    /*   ^^^  Using std::cout to output stuff to the console. Asking user to input numbers.
              Using std::cin to input the numbers into the float variables.   */
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nHere is your cost breakdown" << "\nMonthly Rent: $" << rent;
    std::cout << "\nYearly Rent: $" << rent * 12 << "\nMonthly Internet: $" << internet;
    std::cout << "\nYearly Internet: $" << internet * 12 << "\nMonthly Gas: $" << gas;
    std::cout << "\nYearly Gas: $" << gas * 12 << "\nMonthly Electricity: $" << electrisity;
    std::cout << "\nYearly Electricity: $" << electrisity * 12 << "\nMonthly Water: $" << water;
    std::cout << "\nYearly Water: $" << water * 12 << "\n";
    /*   ^^^  Using std::fixed and std::setprecision(2) to make sure only two decimal points.
              Using std::cout to ouput the monthly and yearly costs. 
              I multiply the monthly costs by 12 to get the yearly costs.   */
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
