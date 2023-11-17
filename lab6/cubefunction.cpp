#include <iostream>

// Function to calculate the cube of a number
long long cube(int num) {
    return static_cast<long long>(num) * num * num;
}

int main() {
    int number;

    std::cout << "Enter a number to calculate its cube: ";
    std::cin >> number;

    long long cubeResult = cube(number);

    std::cout << "The cube of " << number << " is " << cubeResult << std::endl;

    return 0;
}
