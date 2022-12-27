// lettershape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

#define array_size 7

int main()   //Start of main function.
{
    int i0 = 1, i1 = array_size;   //Declering two counting variables.
    const char* c[array_size] = { "A", "B", "C", "D", "E", "F", "G"};   //Declering an array for the characters needed.

    while (i0 < array_size + 1) {   //While loop. Will only run when count0 is less than 8.
        int count2 = 0;   //Declering a local variable for counting.
        std::cout << std::setw(i1) << std::right;   //Setting some manipilations to the console.
        for (count2 = 0; count2 < i0; count2++) {   /* For loop which will use two different counts to go through
                                                           the array and print out each character and the ammout of this
                                                           character needed. */
            std::cout << c[i0 - 1];   //Will print the characters to the console.
        }   //End of for loop.
        i0 += 1;   //Will add 1 to count0. This is so that it can count through the array.
        i1 -= 1;   //Will minus 1 from count1. This is used the set the console width to create the triangle shape.
        std::cout << std::endl;   //Will start end the current line in the console and start a new one.
    }   //End of while loop.
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
