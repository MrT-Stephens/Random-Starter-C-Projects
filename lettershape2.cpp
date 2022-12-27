#include <iostream>
#include <iomanip>

void drawLetterShape(const char[], const int);

int main()
{
    const char c[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };   //Declering an array for the characters needed.
    const int arraySize = sizeof(c) / sizeof(c[0]);   //Using a const int for the size of the array.
    drawLetterShape(c, arraySize);   //Calling the 'drawLetterShape' function and passing the paramiters in.
}   

void drawLetterShape(const char c[], const int arraySize) {
    int i0 = 1, i1 = arraySize + 1;   //Two index variables used in the loops.
    while (i0 < arraySize + 1) {   //While loop. Will only run when count0 is less than 8.
        int count2 = 0;   //Declering a local variable for counting.
        std::cout << std::setw(i1) << std::right;   //Setting some manipilations to the console.
        for (count2 = 0; count2 < i0; count2++) {   /* For loop which will use two different counts to go through
                                                           the array and print out each character and the ammout of this
                                                           character needed. */
            std::cout << c[i0 - 1];   //Will print the characters to the console.
        }   
        i0 += 1;   //Will add 1 to count0. This is so that it can count through the array.
        i1 -= 1;   //Will minus 1 from count1. This is used the set the console width to create the triangle shape.
        std::cout << std::endl;
    }   
}