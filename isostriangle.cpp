#include <iostream>
#include <math.h>

//Creating a class called IsoscelesTriangle.
class IsoscelesTriangle {
private:
    float height, lengthBase;   //Defining private variables, only acessable within class.

    //Function to get values entered into console by user.
    void getValues() {
        std::cout << "Please enter the hbase length, then height of triangle:\n";
        std::cin >> lengthBase >> height;
    }
public:
    //Defult constuctor calls the getValues function.
    IsoscelesTriangle() {
        getValues();
    };
    //Secondary constuctor can input values into object.
    IsoscelesTriangle(float height, float lengthBase) {
        this->height = height;
        this->lengthBase = lengthBase;
    }
    //Function to calcualate the perimeter, will return the perimeter.
    float calcPerimeter() {
        return lengthBase + (sqrt(pow(lengthBase, 2) + ((4) * (pow(height, 2)))));
    }
    //Function to calculate the area, will return the area.
    float calcArea() {
        return (lengthBase * height) / 2;
    }
};

int main()
{
    IsoscelesTriangle triangle1;   //Create a defult object called triangle1.

    //Outputs the area and the perimeter to the console.
    std::cout << "\nArea " << triangle1.calcArea() << "\nPerimeter " << triangle1.calcPerimeter();
}