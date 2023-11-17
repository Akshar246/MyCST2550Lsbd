#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

int main() {
    const int totalNumbers = 10;
    int number;
    int minValue = INT_MAX; // Set to maximum possible integer value
    int maxValue = INT_MIN; // Set to minimum possible integer value

    std::cout << "Enter 10 numbers in a row (each less than 10):" << std::endl;

    for (int i = 0; i < totalNumbers; ++i) {
        // Get input from the user
        std::cin >> number;

        // Validate input
        if (number >= 10) {
            std::cout << "Please enter a number less than 10." << std::endl;
            --i; // Decrement i to repeat the current iteration
            continue;
        }

        // Update min and max values
        if (number < minValue) {
            minValue = number;
        }

        if (number > maxValue) {
            maxValue = number;
        }
    }

    // Display min and max values
    std::cout << "Minimum value entered: " << minValue << std::endl;
    std::cout << "Maximum value entered: " << maxValue << std::endl;

    return 0;
}
