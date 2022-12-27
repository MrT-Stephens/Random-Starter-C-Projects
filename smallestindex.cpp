#include <iostream>

#define MAX_SIZE 100   //Defining the max size of the array that the user can enter.

//Class called 'SmallestIndex' and it wwill find the smallest number of an array.
class SmallestIndex {   
private:   //Private holds the variables needed and the 'getUserValues' function.
    double numbers[MAX_SIZE];   //Double array with the size of 'MAX_SIZE'.
    double smallestNum;
    int userArraySize;
    int smallestIndex;

    //Function 'getUserValues'. Will get the values the user enters into console.
    void getUserValues() {
        std::cout << "Please enter size ammount of numbers, less than " << MAX_SIZE << ":\n";
        do {
            std::cin >> userArraySize;   //Gets the user defined array size.
        } while (userArraySize >= MAX_SIZE);   //Do while, will loop if the entered number is > 'MAX_SIZE'.
        std::cout << "Please enter all the numbers:\n";
        for (int i = 0; i < userArraySize; i++) {   //For loop which will loop from 0 to the size of 'userArraySize'.
            std::cin >> numbers[i];   //Each loop it will get the value entered into console and store in array.
        }
    }
public:
    //Constructor which will call 'getUserValues' then 'findSmallestIndex' each time an object is created.
    SmallestIndex() {
        getUserValues();
        findSmallestIndex();
    };

    void findSmallestIndex();   //Prototype for the 'findSmallestIndex' function.

    //Two get functions to return private variables.
    int getSmallestIndex() {
        return smallestIndex;   //Returns 'smallestIndex' variable.
    }
    double getSmallestNum() {
        return smallestNum;   //Returns 'smallestNum' variable.
    }
};

int main()
{
    SmallestIndex numbers;   //Creates an 'SmallestIndex' object called numbers.

    //Using std::cout to output the infomation to console.
    std::cout << "\nThe smallest number is " << numbers.getSmallestNum() 
        << " and is found at index " << numbers.getSmallestIndex() << "\n";
}

//Function 'findSmallestIndex' which will find the smallest index and number.
void SmallestIndex::findSmallestIndex() {
    smallestNum = numbers[0];   //Sets the variable 'smallestNum' to first number in array.
    for (int i = 0; i < userArraySize; i++) {   //For loop which will loop from 0 to the size of 'userArraySize'.
        if (smallestNum > numbers[i]) {   //If to check if the 'smallestNum' is greater than the current array number.
            //If true will set 'smallestNum' to current array number and will set 'smallestIndex' to current array index.
            smallestNum = numbers[i], smallestIndex = i;  
        }
    }
}