#include <iostream>
#include <string>
#include <iomanip>

#define MAX_SIZE 4   //Defining the MAX size of the arrays. Can be changed to increase 'divisions'.

double getSales(std::string);   //Prototyping the getSales function.
void findHighest(double[MAX_SIZE], const std::string[MAX_SIZE]);   //Prototyping the findHighest function.

const std::string names[MAX_SIZE] = { "Northeast", "Southeast", "Northwest", "Southwest" };   //Constant array string for storing the division locations.
double divisionSales[MAX_SIZE] = { 0 };   //Double array for storing the division sales.

int main()   //Start of main function.
{
    for (int i = 0; i < MAX_SIZE; i++) {   //For loop to count from 0 to 4 to loop through an array.
            divisionSales[i] = getSales(names[i]);   //Will loop through the array and call a function to get the user to enter values.
    }
    findHighest(divisionSales, names);   //Calls function to find the highest number in array and then prints to the console.
}   //End of main function.

//getSales function which will get the user to enter the sales, the division is passed into the function.
double getSales(std::string division) {
    float sale = 0;
    do {
        std::cout << "Please enter " << division << " quarterly sales figure: ";
        std::cin >> sale;
    } while (sale < 0);   //Will run in a loop if the entered number is less than 0.
    return sale;   //Returns the entered number.
}

/*findHighest function will be passed the 'divisionSales' and 'divisionNames' and will
  find the highest division sales and print it to the console. */
void findHighest(double divisionSales[MAX_SIZE], const std::string names[MAX_SIZE]) {
    double temp0 = 0;   //Temp variable for the highest sales.
    std::string temp1;   //Temp variable for the highest sales division.
    for (int i = 0; i < MAX_SIZE; i++) {   //For loop which will loop from 0 to 4 through array.
        if (divisionSales[i] > temp0) {   //If statment to find the highest value in array.
            temp0 = divisionSales[i];
            temp1 = names[i];
        }
    }
    //Outputing the inomation to the console using std::cout.
    std::cout << std::fixed << std::setprecision(2) << "\nThe " << temp1 
        << " division had the highest sales this quarter.\n"
        << "Their sales were $" << temp0 << "\n";
}