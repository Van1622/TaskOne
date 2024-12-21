#include <iostream>
#include "mathlib.h"

int main() {
    using namespace mathlib;

    double num = 25.0;
    double base = 2.0, exponent = 3.0;

    std::cout << "sqrt(" << num << ") = " << sqrt(num) << "\n";
    std::cout << "pow(" << base << ", " << exponent << ") = " << pow(base, exponent) << "\n";
    std::cout << "round(3.14) = " << round(3.14) << "\n";

    return 0;
}

