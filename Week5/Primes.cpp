#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false; // Found a divisor, not a prime number
        }
    }

    return true; // No divisors found, it's a prime number
}

int main() {
    int number;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Find and output the next prime number
    do {
        number++;
    } while (!isPrime(number));

    std::cout << "The next prime number after the entered number is: " << number << std::endl;

    return 0;
}
