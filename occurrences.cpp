#include <iostream>
#include <string>

//Prototyping the functions needed.
std::string getUserName();
int linearSearch(std::string, const std::string[]);

int main()
{
    //Constant string to hold the names which will be sorted through.
    const std::string names[18] = { "Amy", "Rick", "John", "Patrick", "Marina", "Richard", "Raj", "Marcia", "Amy", "Richard", "John", "Rick", "Patrick", "Amy", "Raj", "John", "Patrick", "Richard" };
    std::string name = getUserName();   //Calls the 'getUserName' function and equals it to variable 'name'.
    int occurences = linearSearch(name, names);   //Calls the 'linearSearch' function and equals it to variable 'occurences'.
    if (occurences <= 0) {   //If 'occurences' is equal or less than 0 will output "does not appear".
        std::cout << "\nThe name " << name << " does not appear in the list\n";
    }
    else {   //If not true will output "does appear".
        std::cout << "\nThe name " << name << " appears " << occurences << " times in the list\n";
    }
}

//getUserName function will return the name the user enters.
std::string getUserName() {
    std::string name;   //Variable string to store the name.
    std::cout << "Please enter a name:\n\n";
    std::getline(std::cin, name);   //Will get the whole line that user enters and stores in variable 'name'.
    return name;   //Returns 'name'.
}

//linearSearch function which will search and see how many times the name entered apears in the list.
int linearSearch(std::string name, const std::string names[]) {
    int foundOccur = 0;   //Variable for the ammount of occurences.
    for (int i = 0; i < 18; i++) {   //For loop which loops from 1 to 18.
        //If name is equal to the current name will add one to 'foundOccur'.
        foundOccur = (name == names[i]) ? foundOccur += 1 : foundOccur;
    }
    return foundOccur;   //Returns 'foundOccur'.
}