#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//Class called 'BaseBall' which holds all the variables and fucntions.
class Baseball {
private:   //Private section only acessable within class. Holds two string vectors and two int variables.
    std::vector<std::string> teams;
    std::vector<std::string> wsWinners;
    int timesWon = 0;
public:   //Public section has the constructor and the functions.
    Baseball() {
        readFiles("Teams.txt", teams);   //Calls the 'readFiles' function passes in file name and the vector.
        readFiles("WorldSeriesWinners.txt", wsWinners);   //Calls the 'readFiles' function passes in file name and the vector.
    }

    //Prototype functions.
    void readFiles(std::string, std::vector<std::string>&);   
    int getUserTeam();
    void getTimesWon(int userTeam);
};

int main()
{
    Baseball baseball;   //Creates an object for the 'Baseball' class.
    baseball.getTimesWon(baseball.getUserTeam());   //Calls the 'getUserTeam' function, then passes the returned value into 'getTimesWon' function.
}

//readFiles function. Will take the fileName and vector by refence as paramiters, and will get all the file contents and store in vector.
void Baseball::readFiles(std::string fileName, std::vector<std::string>& contents) {
    std::ifstream readFiles;   //Creates a 'ifsteam' object called 'readFiles'.
    std::string temp;   //Temp string variable for getting the file contents.
    readFiles.open(fileName);   //Opens the file will passed in file name.
    while (!readFiles.eof()) {   //While loop which loops till the end of file.
        std::getline(readFiles, temp);   //Gets the whole line from the file and store in variable 'temp'.
        contents.push_back(temp);   //Puts 'temp' variable into the passed in vector.
    }
    readFiles.close();   //Closes file.
}

//getUserTeam function will display and number all the teams, then will get the users team.
int Baseball::getUserTeam() {
    int vecSize = teams.size(), userTeam;   //Two int variables, 'vecSize' inisalizes with the vector size.
    for (int i = 1; i < vecSize; i++) {   //For loop which counts from 1 to size of the vector.
        std::cout << i << ". " << teams[i - 1] << "\n";   //Will output the teams and number them.
    }
    std::cout << "\nEnter a number for your team: ";
    do {
        std::cin >> userTeam;   //Gets the enter value.
    } while (userTeam < 0 || userTeam > vecSize - 1);   //Do while to check if the entered number is > 0 and < vector size.
    return userTeam;   //Returns 'userTeam'.
}

//getTimesWon function will get the ammount of times the users team won between 1950 and 2014.
void Baseball::getTimesWon(int userTeam) {
    int timesWon = 0;
    for (int i = 0; i < wsWinners.size(); i++) {   //For loop which counts from 0 to size of the vector.
        timesWon = (teams[userTeam - 1] == wsWinners[i]) ? timesWon += 1 : timesWon;   //If the user team is the same as current team in vector will add one to 'timesWon'.
    }
    std::cout << "\n\nThe team " << teams[userTeam - 1] << " has won the world series " << timesWon << " times\n";   //Outputs the ammount the user team won to console.
}