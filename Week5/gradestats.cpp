#include <iostream>

int main() {
    const int maxGrades = 100;
    int grades[maxGrades];
    int gradeCount = 0;
    int sum = 0;

    std::cout << "Enter grades (enter -1 to finish):" << std::endl;
    while (gradeCount < maxGrades) {
        int grade;
        std::cout << "Enter grade " << (gradeCount + 1) << ": ";
        std::cin >> grade;

        if (grade == -1) {
            break;
        }

        // Store the grade in the array
        grades[gradeCount] = grade;
        sum += grade;
        gradeCount++;
    }
    if (gradeCount > 0) {
        double average = static_cast<double>(sum) / gradeCount;
        std::cout << "Average grade: " << average << std::endl;
    } else {
        std::cout << "No grades entered. Cannot calculate average." << std::endl;
    }

    return 0;
}
