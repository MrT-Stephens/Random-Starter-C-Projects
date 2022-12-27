// rainfall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main()   //Start of main function.
{
    std::ifstream inputfile;   //Object for calling the file.

    std::string months[2], filename;   //Defining stings for the months and the file name.

    std::cout << "Enter file name: ";   //Using std::cout to output infomation to console.
    std::getline(std::cin, filename);   //Using std::getline to get the file name when entered.
    inputfile.open(filename);   //Will open the file with the entered file name.

    float rain = 0 , total = 0, average = 0;   //Declering float variables as working in decimals.
    int count = 0;   //Declering an int for counting.

    inputfile >> months[0];   //Inputing the first bit of data from the .txt file.
    inputfile >> months[1];   //Inputting the second bit of data from the .txt file.
    inputfile.ignore(1000, '\n');   //Makes the input file steam ignore the leftover whitespace.

    while (inputfile >> rain) {   //While loop to input the next data from the .txt
        total += rain;   //As the while loop keeps looping it will add the rain data to the last to get the total.
        count++;   //Adding one to the count variable.
    }
    inputfile.close();   //Closing the input file stream.
    average = total / count;   //Calculating the average from the total and the count.

    //Printing all the infoamtion to the console using std::cin.
    std::cout << "During the months of " << months[0] << "-" << months[1] << ", the total rainfall was " << total;
    std::cout << " inches, and the average monthly rainfall was " << average << " inches.";
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
