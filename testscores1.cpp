#include <iostream>
#include <iomanip>
#include <vector>

#define MAX_SIZE 200   //Define for the MAX values that can be entered.

//Four prototype functions that have a vector being passed by reference for the paramiters.
void getUserValues(std::vector<double>&);
void sortTestScores(std::vector<double>&);
double calcAverage(std::vector<double>&);
void printVector(std::vector<double>&);

int main()
{
    std::vector<double> testScores;   //Declering a vector of doubles to hold the test scores.
    getUserValues(testScores);   //Calling the 'getUserValues' and passing the 'testScores' vector in.
    sortTestScores(testScores);   //Calling the 'sortTestScores' and passing the 'testScores' vector in.
    std::cout << std::fixed << std::setprecision(2) << "\n\nAverage Score: " 
        << calcAverage(testScores) << "\nThe test scores in ascending order are:\n";
    printVector(testScores);   //Calling the 'printVector' and passing the 'testScores' vector in.
    std::cout << "for the amount of test scores entered\n";
}

//getUserValues function which takes a vector by reference and stores the entered values in it.
void getUserValues(std::vector<double>& scores) {
    int size = 0;
    std::cout << "Please enter a value for the ammount of test scores:\n";
    do {
        std::cin >> size;   
    } while (size >= MAX_SIZE);   //Will loop while the entered number is less than or equal to 'MAX_SIZE'.
    std::cout << "\nPlease enter all the test scores:\n";
    for (int i = 0; i < size; i++) {   //For loop which loops from 0 to size of variable 'size'.
        double temp;
        do {
            std::cin >> temp;
        } while (temp < 0 || temp > 100);   //Will loop while variable 'temp' is less than 0 or greater than 100.
        scores.push_back(temp);   //Pushes variable 'temp' to the back of the vector.
    }
}

//sortTestScores which will take a vector by reference and sort into accending order.
void sortTestScores(std::vector<double>& scores) {
    std::vector<double>::iterator ptr;   //Declering a irerator vector.
    bool swapMade = false;   //Bool to see if a swap has been made.
    do {
        swapMade = false;
        for (ptr = scores.begin(); ptr < scores.end() - 1; ptr++) {   //For loop which loops from the first 'scores' memory loction to the last.
            if (*ptr > *(ptr + 1)) {   //If the dereferenced pointer values is greater than the next dereferenced pointer value.
                std::swap(*ptr, *(ptr + 1));   //Swaps the two values in the two memory locations.
                swapMade = true;   //Makes bool 'swapMade' to true.
            }
        }
    } while (swapMade);   //Will keep looping if 'swapMade' is ture.
}

//calcAverage function which takes vector by reference and loops through and works out average.
double calcAverage(std::vector<double>& scores) {
    double average = 0;
    for (auto& ptr : scores) {   //For loop which loops from the first 'scores' memory loction to the last.
        average += ptr;   //Does average = average + ptr.
    }
    return average / scores.size();   //Divides the average by the size of vector and returns it.
}

//printVecotr function which loops through and prints all the values to console.
void printVector(std::vector<double>& scores) {
    for (auto& ptr : scores) {
        std::cout << ptr << " ";
    }
}