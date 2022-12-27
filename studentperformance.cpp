#include <iostream>
#include <iomanip>
#include <string>

//Creating a class called StudentPerformace.
class StudentPerformace {
private:
    std::string name;   //Private string variable for student name, only acessable within class.
    double academScore, extraScore;   //Private double variables for academic score and extra curricular score, only acessable within class.

    //Private function to get all the student infomation.
    void getStudentPerformace() {
        std::cout << "Please enter student name, then Academic Score, and then Extra-Curricular Score:\n";
        std::getline(std::cin, name);   //Will get the name entered.

        //Do whiles to check if values entered are between 0 and 100.
        do {
            std::cin >> academScore;
        } while (!(academScore >= 0 && academScore <= 100));
        do {
            std::cin >> extraScore;
        } while (!(extraScore >= 0 && extraScore <= 100));
    }
public:
    //Defult constuctor will call the 'getStudentPerformace' function.
    StudentPerformace() {
        getStudentPerformace();
    };
    //Secondary constuctor allows user to input student performance into object.
    StudentPerformace(std::string name, double academScore, double extraScore) {
        this->name = name;
        this->academScore = academScore;
        this->extraScore = extraScore;
    }
    //Function to set the student name.
    void setStudent(std::string name) {
        this->name = name;
    }
    //Function to get the student name.
    std::string getName() {
        return name;
    }
    //Function to get the academic score.
    double getAcademicScore() {
        return academScore;
    }
    //Function to get the extra curricular score.
    double getExtraCurricularScore() {
        return extraScore;
    }
    //Function which will calculate the student performance and return it.
    double getPerformace() {
        return (academScore * 0.75) + (extraScore * 0.25);
    }
    //Function which will get the student grade and return it.
    char getGrade() {
        if (academScore >= 70 && academScore <= 100) {
            return 'A';   //Returns grade A.
        }
        else if (academScore >= 60 && academScore <= 69) {
            return 'B';   //Returns grade B.
        }
        else if (academScore >= 50 && academScore <= 59) {
            return 'C';   //Returns grade C.
        }
        else if (academScore >= 40 && academScore <= 49) {
            return 'D';   //Returns grade D.
        }
        else {
            return 'F';   //Returns grade F.
        }
    }
};
int main()
{
    StudentPerformace student1;   //Creates a object called student1.

    //Will output all the student infomation to the console.
    std::cout << std::fixed << std::setprecision(2) << "\nStudent " << student1.getName() 
        << "\nPerformance " << student1.getPerformace() << "%\n" << student1.getGrade() << "\n";
}