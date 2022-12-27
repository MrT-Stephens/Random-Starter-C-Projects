#include <iostream>
#include <string>

void printSquare(int[3][3]);   //Prototype function with a 2d array as paramiter.
bool isMagicSquare(int[3][3]);   //Prototype function with a 2d array as paramiter.

int main()
{
    int square[3][3];   //Declering the 2d array.
    std::cout << "Please enter 9 values for the loshu square:\n";
    for (int col = 0; col < 3; col++) {   //For loop which is for the colums and will count to 3.
        for (int row = 0; row < 3; row++) {   //For loop which is for the rows and will count to 3.
            do {
                std::cin >> square[col][row];   //Will input the numbers from console and uses the two for loops to loop though the 2d array.
            } while (square[col][row] < 0 || square[col][row] > 9);   //Will loop again if the numbers entered are not between 0 and 9.
        }
    }
    printSquare(square);   //Calls 'printSquare' function and passes 2d array in.
    bool isLoshu = isMagicSquare(square);   //Creates a bool and equals it to the returned value of the function 'isMagicSquare'.
    if (isLoshu == true) {
        std::cout << "\n\nIt is a magic square\n";   //Outputs if its a magic square.
    }
    else {
        std::cout << "\n\nIt is not a magic square\n";   //Outputs if its not a magic square.
    }
}

//printSquare function that loops though the 2d array and prints the 9 numbers in a 3x3 to console.
void printSquare(int square[3][3]) {
    for (int col = 0; col < 3; col++) {   //For loop which is for the colums and will count to 3.
        std::cout << "\n";
        for (int row = 0; row < 3; row++) {   //For loop which is for the rows and will count to 3.
            std::cout << square[col][row] << " ";   //Uses two loops to print 2d array to console.
        }
    }
}

//isMagicSquare function to check if the entered numbers are a magic square.
//Each row added up will equal 15, Each colum added up will equal 15, Each diagonal added up will equal 15.
bool isMagicSquare(int square[3][3]) {
    int sum1 = 0, sum2 = 0;   //Two sum variables for the diagonal calculations.
    for (int i = 0; i < 3; i++) {
        sum1 += square[i][i];   //Does the diagonal sum from left to right.
        sum2 += square[i][2-i];   //Does the diagonal sum from right to left.
    }
    if (sum1 != sum2) {
        return false;   //If the two diagonal sums are not equal to each other returns false.
    }
    for (int col = 0; col < 3; col++) {   //For loop which is for the colums and will count to 3.
        int colSum = 0, rowSum = 0;
        for (int row = 0; row < 3; row++) {   //For loop which is for the rows and will count to 3.
            rowSum += square[col][row];   //Does the rows calculations.
            colSum += square[row][col];   //Does the colums calculations.
        }
        if (rowSum != 15 || colSum != 15) {   
            return false;   //If the rowSum or colCum is not equal to 15 it will return false.
        }
    }
    return true;   //Returns true.
}