#include "mathlib.h"
#include <cmath> // Використовуємо стандартні функції з цієї бібліотеки

namespace mathlib {

double sqrt(double x) {
    return std::sqrt(x);
}

double pow(double base, double exponent) {
    return std::pow(base, exponent);
}

double round(double x) {
    return std::round(x);
}

} // namespace mathlib

