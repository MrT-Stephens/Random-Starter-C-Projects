// heightinmeters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()   //Start of main function.
{
    int heightFt, heightIn;   //Declering int varables for the integer values.
    float heightM;   //Declering a float for the decimal value.
    std::cout << "Please enter height in feet and inches!\n";   //Outputs some infomation to console.
    std::cin >> heightFt >> heightIn;   //Gets the entered values through keyboard and intputs to variables.
    heightM = static_cast<float>((heightFt * 0.3048) + (heightIn * 0.0254));   
    /*  ^^ Calculates the height in m, using some conversitons.
           Also converts the int variable to the float variable for the deciamal point.  */
    std::cout << std::fixed << std::setprecision(2) << "\nHeight in feet and inches is " << heightFt << "ft, " << heightIn << "in\n" << "Height in meters is " << heightM << "m\n";
    /*  ^^ Outputs the values and also some infomation to console.
           Using std::fixed and std::setprecision to make sure the number of decimal points is only 2.  */
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
