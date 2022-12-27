#include <iostream>
#include <iomanip>
#include <string>

#define maxSize 5

class ChipsAndSalsa {
private:
	const std::string names[maxSize] = { "mild", "medium", "sweet", "hot", "zesty" };
	int jarsSold[maxSize];
	int total = 0;

	void getValues() {
		std::cout << "Please enter the jars sold!\n";
		for (int i = 0; i < maxSize; i++) {
			do
			{
				std::cout << names[i] << ": ";
				std::cin >> jarsSold[i];
			} while (jarsSold[i] < 0);
			total = total + jarsSold[i];
		}
	}
public:
	ChipsAndSalsa() {
		getValues();
		displayReport();
	}
	int posOfLargest();
	int posOfSmallest();
	void displayReport();
};

int main()
{
	ChipsAndSalsa sales1;
}

int ChipsAndSalsa::posOfLargest() {
	int temp0 = 0, temp1 = jarsSold[0];
	for (int i = 0; i < maxSize; i++) {
		if (temp1 < jarsSold[i]) {
			temp1 = jarsSold[i];
			temp0 = i;
		}
	}
	return temp0;
}

int ChipsAndSalsa::posOfSmallest() {
	int temp0 = 0, temp1 = jarsSold[0];
	for (int i = 0; i < maxSize; i++) {
		if (temp1 > jarsSold[i]) {
			temp1 = jarsSold[i];
			temp0 = i;
		}
	}
	return temp0;
}

void ChipsAndSalsa::displayReport() {
	std::cout << "\n Salsa Sales Report \n\n"
		<< "Name       Jars Sold \n" 
		<< "____________________\n";
	for (int type = 0; type < maxSize; type++) {
		std::cout << std::left << std::setw(11) << names[type] << jarsSold[type] << "\n";
	} 
	std::cout << "\nTotal Sales: " << total
		<< "\nHigh Seller: " << names[posOfLargest()]
		<< "\nLow Seller : " << names[posOfSmallest()] << "\n";
}