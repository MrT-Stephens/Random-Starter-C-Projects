#include <iostream>

float averageVelocity(float, float, float, float);   //Prototyping a function.

int main()
{   //Start of main function.
    float xyKm = 0, yzKm = 0, xyHours = 0, yzHours = 0;   //Declering the needed variables.

    //Using std::cout to output to console, then std::cin to get the entered numbers.
    std::cout << "Please enter the distance bettween X and Y, then Y and Z in Km:\n";
    std::cin >> xyKm >> yzKm;
    std::cout << "\nPlease enter the time taken from X to Y, then Y to Z in hours:\n";
    std::cin >> xyHours >> yzHours;

    //Outputing the calculated answer to console, from calling the function.
    std::cout << "Average speed was " << averageVelocity(xyKm, yzKm, xyHours, yzHours) << "Km/H";
}   //End of main function.

//Function to calcualte the average velocity from the entered numbers.
float averageVelocity(float xyKm, float yzKm, float xyHours, float yzHours) {
    return (xyKm + yzKm) / (xyHours + yzHours);
}