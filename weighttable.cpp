#include <iostream>
#include <iomanip>

const int tons = 20;  //Declering the global variable for the tons.

float toPounds(float);   //Prototyping a function.
float toKiologram(float);   //Prototyping a function.

int main()
{   //Start of main function.
    
    //Printing the header of the table to the console.
    std::cout << "|--------------------------------|\n|Tons"
        << std::setw(13) << "|Pounds" << std::setw(16) << "|Kilograms |" 
        << "\n|--------------------------------|\n";

    //For loop to print the table and the convertions, depending on the ammount of tons there is.
    for (int i = 2; i <= tons; i += 2) {
        float pounds = toPounds(i), kilo = toKiologram(i);
        std::cout << "|" << std::left << std::setw(10) << i << "|"
            << std::left << std::setw(10) << pounds
            << std::left << "|" << std::left << std::setw(10) << kilo << "|\n";
    }
    //Printing the end of the table to the console.
    std::cout << "|--------------------------------|\n";
}   //End of main function.

//Function to convert tons to pounds.
float toPounds(float tons) {
    return tons * 2240;
}

//Function to convert tons to kiolograms.
float toKiologram(float tons) {
    return tons * 1016.05;
}