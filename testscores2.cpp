#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#define MAX_SIZE 200   //Define for the MAX values that can be entered.

//Four prototype functions that have a vector being passed by reference for the paramiters.
void getUserValues(std::vector<double>&, std::vector<std::string>&);
void sortTestScores(std::vector<double>&, std::vector<std::string>&);
double calcAverage(std::vector<double>&);
void printVector(std::vector<double>&, std::vector<std::string>&);

int main()
{
    std::vector<double> testScores;   //Declering a vector of doubles to hold the test scores.
    std::vector<std::string> scoreNames;
    getUserValues(testScores, scoreNames);   //Calling the 'getUserValues' and passing the 'testScores' vector in.
    sortTestScores(testScores, scoreNames);   //Calling the 'sortTestScores' and passing the 'testScores' vector in.
    std::cout << std::fixed << std::setprecision(2) << "\n\nAverage Score: "
        << calcAverage(testScores) << "\nThe test scores in ascending order are:\n";
    printVector(testScores, scoreNames);   //Calling the 'printVector' and passing the 'testScores' vector in.
    std::cout << "for the amount of test scores entered\n";
}

//getUserValues function which takes a vector by reference and stores the entered values in it.
void getUserValues(std::vector<double>& scores, std::vector<std::string>& names) {
    int size = 0;
    double temp1;
    std::string temp2;
    std::cout << "Please enter a value for the ammount of test scores:\n";
    do {
        std::cin >> size;
    } while (size >= MAX_SIZE);   //Will loop while the entered number is less than or equal to 'MAX_SIZE'.
    std::cout << "\nPlease enter all the names and test scores:\n";
    for (int i = 0; i < size; i++) {   //For loop which loops from 0 to size of variable 'size'.
        do {
            std::cin >> temp2;
        } while (temp2.empty());   //Will loop while the nothing is entered.
        do {
            std::cin >> temp1;
        } while (temp1 < 0 || temp1 > 100);   //Will loop while variable 'temp' is less than 0 or greater than 100.
        names.push_back(temp2);   //Pushes variable 'temp2' to the back of vector.
        scores.push_back(temp1);   //Pushes variable 'temp1' to the back of the vector.
    }
}

//sortTestScores which will take two vectors by reference and sort into accending order.
void sortTestScores(std::vector<double>& scores, std::vector<std::string>& names) {
    std::vector<double>::iterator ptr;   //Declering a irerator vector.
    bool swapMade = false;   //Bool to see if a swap has been made.
    do {
        swapMade = false;
        int i = 0;
        for (ptr = scores.begin(); ptr < scores.end() - 1; ptr++) {   //For loop which loops from the first 'scores' memory loction to the last.
            if (*ptr > *(ptr + 1)) {   //If the dereferenced pointer values is greater than the next dereferenced pointer value.
                std::swap(*ptr, *(ptr + 1));   //Swaps the two values in the two memory locations.
                std::swap(names[i], names[i + 1]);   //swaps the first name and next name with eachother.
                swapMade = true;   //Makes bool 'swapMade' to true.
            }
            i++;   //Adds 1 to i.
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
void printVector(std::vector<double>& scores, std::vector<std::string>& names) {
    int i = 0;
    for (auto& ptr : scores) {
        std::cout << "Name: " << names[i] << " score: " << ptr << "\n";
        i++;
    }
}
