#include <iostream>

int main() {
    double midtermGrade, finalGrade;
    
    std::cout << "Enter the midterm grade: ";
    std::cin >> midtermGrade;

    std::cout << "Enter the final grade: ";
    std::cin >> finalGrade;

    double average = (midtermGrade + finalGrade) / 2;

    std::cout << "Average grade: " << average << std::endl;

    return 0;
}
