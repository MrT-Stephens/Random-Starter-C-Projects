// burger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()   //Start of main function.
{
    int KidsBurger, HamBurger, CheeseBurger, CheeseBacon;   //Declering variables for the ammount of each burger sold.
    float Total = 0;   //Declering varible float for the total ammount made, using float as could be decimal number.
    std::cout << "Please enter the ammount sold of Kids Burger, Ham Burger, Cheese Burger, and Chesse + Bacon Burger!\n";
    /*  ^^^  Using std::cout to print some text to the console, asking the user to enter ammount of burgers sold.  */
    std::cin >> KidsBurger >> HamBurger >> CheeseBurger >> CheeseBacon;   /*  Using std::cin to get the numbers that get
                                                                          entered into console and put them into the variables.  */
    Total = (KidsBurger * 2.50) + (HamBurger * 3.50) + (CheeseBurger * 4.20) + (CheeseBacon * 5.00);
    /*  ^^^  Equation for calculating the total ammount of sales made.  */
    std::cout << std::fixed << std::setprecision(2) << "\nTotal sales for the day $" << Total;   //Using std::cout to print the the total ammount made.
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
