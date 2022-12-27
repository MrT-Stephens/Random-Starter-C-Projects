// annualtemperatures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()   //Start of main function.
{
    int NYTemp = 85, DenverTemp = 88, PheonixTemp = 106;   //Declering all integer varibles for storing temp values.
    std::cout << "NY average is " << NYTemp << "\nDenver average is " << DenverTemp << "\nPheonix average is " << PheonixTemp << "\nIf the averages temp rose by 15%";
    std::cout << "\nNY average would be " << (NYTemp * 0.15) + NYTemp << "\nDenver average would be " << (DenverTemp * 0.15) + DenverTemp << "\nPheonix average would be " << (PheonixTemp * 0.15) + PheonixTemp;
    /*  ^^  Using two std::cout, so the line of code is not so long.
            These two lines will output some infomation to the console and the tempretures and tempratures if the increased by 15%  */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
