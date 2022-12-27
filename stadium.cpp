#include <iostream>
#include <string>

//Struct called 'StadiumData' which will hold all the infomation about the matches.
struct StadiumData {
private:   //Private holds all the variables needed and this can only be accessed within struct.
    std::string matchName;
    std::string player1, player2;
    std::string slot;
    short int tickets;
    double price;
public:   //Public holds the constuctors and the functions needed.
    //Constuctor which will allow the user to set the variables when an object is created.
    StadiumData(std::string matchName, std::string player1, std::string player2, std::string slot, short int tickets, double price) {
        this->matchName = matchName;
        this->player1 = player1;
        this->player2 = player2;
        this->slot = slot;
        this->tickets = (tickets > 500) ? 500 : tickets;   //Short hand if to check if the entered number is > 500.
        this->price = (price < 0) ? 0 : price;   //Short hand if to check if the entered number is < 0.
    }
    //Get functions to allow the user outside of the struct to access the variables.
    std::string getMatchName() {
        return matchName;   //Returns 'matchName' as string.
    }
    std::string getPlayer1() {
        return player1;   //Returns 'player1' as string.
    }
    std::string getPlayer2() {
        return player2;   //Returns 'player2' as string.
    }
    std::string getSlot() {
        return slot;   //Returns 'slot' as string.
    }
    short int getTickets() {
        return tickets;   //Returns 'tickets' as short int.
    }
    double getPrice() {
        return price;   //Returns 'price' as double.
    }
};

//Prototype function called 'displayInfo' allows three objects by reference to be passed in.
void displayInfo(StadiumData&, StadiumData&, StadiumData&);
//Prototype function called 'getMostTickets' allows three objects by reference to be passed in.
void getMostTickets(StadiumData&, StadiumData&, StadiumData&);
//Prototype function called 'displayMostTickets' allows one object by reference and an int to be passed in.
void displayMostTickets(StadiumData&, int);

int main()   //Start of main function.
{
    //Three different constuctors created with all the different match infomation.
    StadiumData match1("Match 1", "Jim", "Tony", "Afternoon", 245, 40);
    StadiumData match2("Match 2", "Bob", "Ethan", "Morning", 129, 60);
    StadiumData match3("Match 3", "James", "Sam", "Evening", 499, 80);

    //Calls the 'displayInfo' function and passes the three objects by reference in.
    displayInfo(match1, match2, match3);

}   //End of main function.

//The 'displayInfo' function which has three objects by reference being passed in.
void displayInfo(StadiumData& one, StadiumData& two, StadiumData& three) {
    //Using std::cout to output the match 1, 2 and 3 tickets sold to console.
    std::cout << "Match 1 has sold " << one.getTickets()  << " tickets" << "\nMatch 2 has sold "
        << two.getTickets() << " tickets" << "\nMatch 3 has sold " << three.getTickets() << " tickets";
    //Calls the 'getMostTickets' function and passes the three objects in that were passed into the 'displayInfo' function.
    getMostTickets(one, two, three);
}

//The 'getMostTickets' function which has three objects by reference being passed in.
void getMostTickets(StadiumData& one, StadiumData& two, StadiumData& three) {
    int totalTickets = one.getTickets() + two.getTickets() + three.getTickets();   //Works out the total tickets using the tree different objects.
    //Two if and one else to find the match which sold the highest tickets.
    if (one.getTickets() > two.getTickets() && one.getTickets() > three.getTickets()) {
        //If match 1 is the highest it will call 'displayMostTickets' and pass in object one by reference and 'totalTickets'.
        displayMostTickets(one, totalTickets);
    }
    else if (two.getTickets() > three.getTickets() && two.getTickets() > one.getTickets()) {
        //If match 2 is the highest it will call 'displayMostTickets' and pass in object two by reference and 'totalTickets'.
        displayMostTickets(two, totalTickets);
    }
    else {
        //If match 3 is the highest it will call 'displayMostTickets' and pass in object three by reference and 'totalTickets'.
        displayMostTickets(three, totalTickets);
    }
}

//The 'displayMostTickets' function which has one object passed in by reference and the 'totalTickets'.
void displayMostTickets(StadiumData& mostTickets, int totalTickets) {
    //Uses std::cout and the most tickets sold object to output all the infomation to console.
    std::cout << "\n\n" << mostTickets.getMatchName() << " sold the most tickets with "
        << mostTickets.getTickets() << " here is that matches details:\n" << "Match Name: "
        << mostTickets.getMatchName() << "\nPlayer on the Left: " << mostTickets.getPlayer1()
        << "\nPlayer on the Right: " << mostTickets.getPlayer2() << "\nPlaying Time: "
        << mostTickets.getSlot() << "\nTickets booked: " << mostTickets.getTickets() << " Out of 500"
        << "\nPrice of entry ticket: " << mostTickets.getPrice() << "\n\nTotal tickets sold: "
        << totalTickets << "\n";
}