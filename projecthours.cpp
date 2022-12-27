// projecthours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()   //Start of main function
{
    int bobDays = 0, jennyDays = 0, total = 0;   //Declering the int variable for the inputs and output.
    std::cout << "How much time in days did bob and jenny spend working?\n";   //Using std::cout to output infomation to the console.
    std::cin >> bobDays >> jennyDays;   //Using std::cin to input the numbers entered though keyboard into the variables.
    total = bobDays * 270;   //Small formula to calculate the minuites that bob works. 
    std::cout << "\nBob worked a total of " << total / 60 << " hours and " << total % 60 << " minutes on the project\n";
    /*  ^^^  Using std::cout to output the totals. I didive total by 60 to put the minites into hours.
             I  use total % 60 to get the remainder minutes when divided by 60.  */
    total = 0;   //Setting total to zero so i can reuse this variable.
    total = jennyDays * 195;   //Small formula to calculate the minuites that jenny works.
    std::cout << "Jenny worked a total of " << total / 60 << " hours and " << total % 60 << " minutes on the project\n";
    /*  ^^^  Using std::cout to output the totals. I didive total by 60 to put the minites into hours.
             I  use total % 60 to get the remainder minutes when divided by 60.  */
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
