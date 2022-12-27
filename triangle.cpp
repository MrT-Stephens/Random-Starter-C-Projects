// triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>

int main()   //Start of main function.
{
    float a, b, c, s;   //Declering float variables as will be working with deciamls.
    std::cout << "Please enter the values for a, b, then c:\n";   //Using std::cout to output to console.
    std::cin >> a >> b >> c;   //Getting the entered values and putting them into the float variables.
    if (((a + b) < c) || ((a + c) < b) || ((b + c) < a)) {   //If statment for input validation to check if any of the two sides added together is less than the third side.
        std::cout << "This is not a valid triangle\n";   //If this statment is true then it will print an error.
        std::exit(0);
    }
    else {   //Else statment for if the if wasnt true.
        std::cout << "Triangle is valid" << std::fixed << std::setprecision(2);   //Outputing to console and setting the decimals points to two.
        s = (a + b + c) / 2;   //Formula to calculate s, which is needed to calculate the area.
        std::cout << "\nArea is " << sqrt(s * ((s - a) * (s - b) * (s - c))) << "\n";   //Will calculate area and output to console.
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
