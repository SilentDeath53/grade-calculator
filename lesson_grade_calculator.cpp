#include <iostream>

int main() {
    int numLessons;
    double totalCredit = 0;
    double totalGrade = 0;

    std::cout << "Enter the number of lessons: ";
    std::cin >> numLessons;

    for (int i = 1; i <= numLessons; ++i) {
        double credit, grade;
        std::cout << "Enter the credit for lesson " << i << ": ";
        std::cin >> credit;

        std::cout << "Enter the grade for lesson " << i << ": ";
        std::cin >> grade;

        totalCredit += credit;
        totalGrade += (credit * grade);
    }

    double average = totalGrade / totalCredit;

    std::cout << "Average grade: " << average << std::endl;

    return 0;
}
