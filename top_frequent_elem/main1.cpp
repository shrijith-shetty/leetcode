#include <iostream>
#include <cmath>

bool isPerfectRoot(int number, int root) {
    if (number < 0 && root % 2 == 0) return false; // even root of negative number is not real

    double nthRoot = pow(number, 1.0 / root);
    int roundedRoot = std::round(nthRoot);

    return std::pow(roundedRoot, root) == number;
}

int main() {
    int number = 81;
    int root = 3;

    if (isPerfectRoot(number, root)) {
        std::cout << number << " has a perfect " << root << "th root: "
                  << std::round(std::pow(number, 1.0 / root)) << std::endl;
    } else {
        std::cout << number << " does not have a perfect " << root << "th root." << std::endl;
    }

    return 0;
}