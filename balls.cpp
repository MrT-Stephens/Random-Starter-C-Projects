#include <iostream>
#include <math.h>
#include <vector>

#define pi 3.14159265358979323846

class Balls {
private:   //Private member vaiables and one private member functions.
    int numOfBalls;
    std::vector<double> ballDiameter;
    void getUserValues();
public:   //Public member items.
    Balls() {   //Defult constuctor.
        getUserValues();   //Calls 'getUserValues' function.
        printBalls();   //Calls 'printBalls' function.
    };
    ~Balls() {};   //Defult deconstutor.
    void printBalls();   //Public member function.
};
int main()
{
    Balls balls;   //Creating a 'Balls' object called 'balls'.
}

//getUserValues function which will get the values entered into console by user and store in variables.
void Balls::getUserValues() {
    std::cout << "Please enter the ammount of ball:\n";
    std::cin >> numOfBalls;   //Gets the entered value and stores in 'numOfBalls'.
    std::cout << "Please enter the diameter of each ball:\n";
    for (int i = 0; i < numOfBalls; i++) {   //For loop which loops from 0 to size of 'numOfBalls'.
        double temp;
        std::cin >> temp;   //Gets the entered value and stores in 'temp'.
        ballDiameter.push_back(temp);   //Pushes variable 'temp' to the back of vector.
    }
}

//printBalls function loops through vector and prints the volume of the balls.
void Balls::printBalls() {
    for (int i = 0; i < numOfBalls; i++) {   //For loop which loops from 0 to size of 'numOfBalls'.
        std::cout << "Volume of ball " << i + 1 << " " << (pi * pow(ballDiameter[i], 3)) / 6 << "\n";
    }                                                     //^^^^<- Calculates the balls volume from the diameter.
}