#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

//Class called 'Quake' which holds another class and functions.
class Quake { 
private:   //Private members functions and vaiables.

    //Class called 'QuakeData' which holds the variables for the earthquake data.
    class QuakeData { 
    private:   //Private member variables.
        std::string quakeName;
        std::string quakeLocation;
        double magnitude = 0;
        void getQuakeData();
    public:
        QuakeData() {   //Constructor for the QuakeData.
            getQuakeData();
        }   
        //Public member functions within the 'QakeData' class.
        double getMagnitude();
        std::string getQuakeName();
        std::string getQuakeLocation();
    };

    std::vector<QuakeData> earthquakes;   //Creating a vector with the data type 'QuakeData' and an object called 'earthquakes'.

public:
    Quake() {}   //Constructor for the 'Quake' class.
    //Public member functions with in the 'Quake' class.
    void insertQuake();   
    void sortQuake();
    void printQuake();
};

int main()
{
    Quake Quakes;   //Creates a 'Quake' class object.
    //Calls the 'insertQuake' function five times.
    Quakes.insertQuake();   
    Quakes.insertQuake();
    Quakes.insertQuake();
    Quakes.insertQuake();
    Quakes.printQuake();   //Calls the 'printQuake' function.
    Quakes.sortQuake();   //Calls the 'sortQuake' function.
    Quakes.printQuake();   //Calls the 'printQuake' function.
    Quakes.insertQuake();   //Calls the 'insertQuake' function.
    Quakes.printQuake();   //Calls the 'printQuake' function.
    Quakes.sortQuake();   //Calls the 'sortQuake' function.
    Quakes.printQuake();   //Calls the 'printQuake' function.
}

//getQuakeData function which is within class 'Quake' and class 'QuakeData'.
//Will get the entered user numbers and store in one of the 'QuakeData' objects.
void Quake::QuakeData::getQuakeData() {
    std::cout << "Earthquake Name: ";
    std::getline(std::cin, quakeName);
    std::cout << "Earthquake Location: ";
    std::getline(std::cin, quakeLocation);
    std::cout << "Earthquake magnitude in richter scale: ";
    std::cin >> magnitude;
    std::cin.ignore(1000, '\n');
    std::cout << "\n";
}

//getMagnitude function which is within class 'Quake' and class 'QuakeData'.
//Will get the variable magnitude and return it.
double Quake::QuakeData::getMagnitude() {
    return magnitude;
}

//getQuakeName function which is within class 'Quake' and class 'QuakeData'.
//Will get the variable quakeName and return it.
std::string Quake::QuakeData::getQuakeName() {
    return quakeName;
}

//getQuakeLocation function which is within class 'Quake' and class 'QuakeData'.
//Will get the variable quakeLocation and return it.
std::string Quake::QuakeData::getQuakeLocation() {
    return quakeLocation;
}

//sortQuake function which is within the class 'Quake'. 
//Will sort the 'quakeData' objects magnitude into accending order.
void Quake::sortQuake() {
    bool swapMade = false;   //Bool to see if a swap has been made. 
    do {
        swapMade = false;
        for (int i = 0; i < earthquakes.size() - 1; i++) {   //For loop which loops from 0 to size of 'earthquakes' vector.
            //If to check if the objects magnitude is greater than the next objects magnitude.
            if (earthquakes[i].getMagnitude() > earthquakes[i + 1].getMagnitude()) {
                //If true it will swap the first object with the second object.
                std::swap(earthquakes[i], earthquakes[i + 1]);  
                swapMade = true;   //Makes bool 'swapMade' to true.
            }
        }
    } while (swapMade);   //Will keep looping if 'swapMade' is ture.
}

//insertQuake function which is within class 'Quake'.
//Will insert a new 'QuakeData' object into the vector.
void Quake::insertQuake() {
    QuakeData earthquake;   //Creates another 'QuakeData' object called 'earthquake'.
    earthquakes.push_back(earthquake);   //Passes the 'earthquake' object to the back of the 'earthquakes' vector.
}

//printQuake function which is within class 'Quake'.
//Will loop through the current throught the vector of 'QuakeData' objects and print all the variables to console.
void Quake::printQuake() {
    std::cout << "\n";
    for (int i = 0; i < earthquakes.size(); i++) {   //For loop which loops from 0 to size of 'earthquakes' vector.
        //Calls the correct 'get' functions and prints the returned values to the console.
        std::cout << "\nIndex: " << i << " value Name: " << earthquakes[i].getQuakeName()
            << " Location " << earthquakes[i].getQuakeLocation() << " Magnitude "
            << earthquakes[i].getMagnitude();
    }
    std::cout << "\n\n";
}