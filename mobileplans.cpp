// mobileplans.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

int main()   //Start of main function.
{
    //Struct to store all the data about Plan A.
    const struct planA {
        float cost = 29.99, additionalMins = 0.45, additionalData = 2;
        int mins = 450, data = 1;
    } A;
    
    //Struct to store all the data about Plan B.
    const struct planB {
        float cost = 39.99, additionalMins = 0.40, additionalData = 1.50;
        int mins = 900, data = 3;
    } B;

    //Struct to store all the data about Plan C.
    const struct planC {
        float cost = 59.99;
        //Data and minuites are unlimited.
    } C;

    //Struct to store all of the customers data when its inputed.
    struct customerInfo {
        std::string customer = {""};
        char customerPackage = 0, betterPackage = 0;
        float minsUsed = 0, dataUsed = 0, totalCost = 0, totalCostA = 0, totalCostB = 0, betterPackCost = 0;
        int additionalData = 0, additionalMins = 0;
    } customer;
    
    std::cout << "Please enter the customers infomation:\n" << "Customer = ";   //Using std::cout to output info to console.
    getline(std::cin, customer.customer);
    std::cout << "Package = "; //Using std::cout to output info to console.
    std::cin >> customer.customerPackage;   //Usign std::cin to get the entered character and store in char.
    std::cout << "Minutes used = ";   //Using std::cout to output info to console.
    std::cin >> customer.minsUsed;   //Using std::cin to get the entered number and stores in float.
    std::cout << "Data used = ";   //Using std::cout to output info to console.
    std::cin >> customer.dataUsed;   //Using std::cin to get the entered number and stores in float.
    
    //Calculates the plan A cost with given infomation.
    customer.additionalMins = (customer.minsUsed < A.mins) ? 0 : customer.minsUsed - A.mins;
    customer.additionalData = (customer.dataUsed < A.data) ? 0 : customer.dataUsed - A.data;
    customer.totalCostA = (customer.additionalMins > 0 || customer.additionalData > 0) ? A.cost + (customer.additionalMins * A.additionalMins) + (customer.additionalData * A.additionalData) : A.cost;

    //Calculates the plan B cost with given infomation.
    customer.additionalMins = (customer.minsUsed < B.mins) ? 0 : customer.minsUsed - B.mins;
    customer.additionalData = (customer.dataUsed < B.data) ? 0 : customer.dataUsed - B.data;
    customer.totalCostB = (customer.additionalMins > 0 || customer.additionalData > 0) ? B.cost + (customer.additionalMins * B.additionalMins) + (customer.additionalData * B.additionalData) : B.cost;
    
    //Case statements which will check the customers package and give the correct output.
    switch (customer.customerPackage) {
    case 'A':
        customer.totalCost = customer.totalCostA;
        break;
    case 'B':
        customer.totalCost = customer.totalCostB;
        break;
    case 'C':
        customer.totalCost = C.cost;
        break;
    default:
        std::cout << "\nA valid package was not entered. Please enter A, B, or C!\n";
        exit(1);
    }

    //Using std::cout to output the customers name, customers, package and the customers total cost.
    std::cout << std::fixed << std::setprecision(2) << "\nCustomers Bill" << "\nPlan " << customer.customerPackage << "\nTotal cost for this month is: $" << customer.totalCost << "\n";

    //Validation to check if the there is a better plan cost.
    if (customer.totalCost > A.cost) {
        customer.betterPackage = (customer.totalCostB < customer.totalCostA) ? 'B' : 'A';
        customer.betterPackCost = (customer.totalCostB < customer.totalCostA) ? customer.totalCostB : customer.totalCostA;
    } 
    else if (customer.totalCost > B.cost) {
        customer.betterPackage = (customer.totalCostB < customer.totalCostA) ? 'B' : 'A';
        customer.betterPackCost = (customer.totalCostB < customer.totalCostA) ? customer.totalCostB : customer.totalCostA;
    }
    else if (customer.totalCost > C.cost) {
        customer.betterPackage = 'C';
        customer.betterPackCost = C.cost;
    }
    else if (customer.totalCost < A.cost) {
        customer.betterPackage = 'A';
        customer.betterPackCost = customer.totalCostA;
    }
    
    //Extra Validation to make sure that the new plan cost is actually less than the old plan cost.
    if (customer.betterPackCost > 0 && customer.betterPackCost < customer.totalCost) {
        std::cout << std::fixed << std::setprecision(2) << "You would get a better deal on plan " << customer.betterPackage << ": $" << customer.betterPackCost << "\n";
    }
    else {
        std::cout << "You are on the best deal\n";
    }
    
}   //End of main function.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
