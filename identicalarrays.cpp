#include <iostream>
#include <string>

#define MAX_SIZE 20   //Defining the max size of the array;

bool isIdentical(double[MAX_SIZE], double[MAX_SIZE]);   //Prototyping an bool function which has two double arrays passed in.
void getNumbers();   //Prototyping an void function.

double array1[MAX_SIZE], array2[MAX_SIZE];   //Declering two double arrays with the size of 'MAX_SIZE'.

int main()   //Start of main function.
{
    getNumbers(); 
    //String 'output' will be equal to "arrays are identical" if 'isIdentical is true, otherwise they are not identical.
    std::string output = (isIdentical(array1, array2) == true) ? "\nThe arrays are identical\n" : "\nThe arrays are not identical\n";
    std::cout << output;   //Uses std::cout to output, 'output' to console.
}   //End of main function.

//Function 'getNumbers' which will get the numbers entered by user into console.
void getNumbers() {
    std::cout << "Please enter " << MAX_SIZE << " for array one:\n";
    for (short int i = 0; i < MAX_SIZE; i++) {   //For loop which loops from 0 to size of 'MAX_SIZE'.
        std::cin >> array1[i];   //Get the numbers entered into console and stores into array 1. 
    }
    std::cout << "Please enter " << MAX_SIZE << " for array two:\n";
    for (short int i = 0; i < MAX_SIZE; i++) {   //For loop which loops from 0 to size of 'MAX_SIZE'.
        std::cin >> array2[i];   //Get the numbers entered into console and stores into array 2. 
    }
}

//Function 'isIdentical' which checks if the two arrays passed in are identical.
bool isIdentical(double array1[MAX_SIZE], double array2[MAX_SIZE]) {
    short int i;   //Short int for counting.
    for (i = 0; i < MAX_SIZE; i++) {   //For loop which loops from 0 to size of 'MAX_SIZE'.
        if (array1[i] != array2[i]) {   //If to check if 'array1' is not equal to 'array2'.
            return false;   //If true returns false.
        }
    }
    //Will check if the loop fully complete. If true returns 'true'. If false returns 'false'.
    return (i == MAX_SIZE) ? true : false; 
}