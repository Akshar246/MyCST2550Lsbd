#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades;
    int grade;

    std::cout << "Enter grades (enter -1 to calculate the average):" << std::endl;

    while (true) {
        std::cout << "Enter a grade: ";
        std::cin >> grade;

        if (grade == -1) {
            break;
        }

        grades.push_back(grade);
    }

    if (grades.empty()) {
        std::cout << "No grades entered. Exiting." << std::endl;
    } else {
        int total = 0;
        for (int g : grades) {
            total += g;
        }

        double average = static_cast<double>(total) / grades.size();
        std::cout << "Average grade: " << average << std::endl;
    }

    return 0;
}
