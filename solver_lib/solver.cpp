#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (d < 0) {
        std::cout << "No real roots" << std::endl;
    } else {
        double x1 = (-b - std::sqrt(d)) / (2 * a);
        double x2 = (-b + std::sqrt(d)) / (2 * a);
        std::cout << "x1 = " << std::fixed << std::setprecision(5) << x1 << std::endl;
        std::cout << "x2 = " << std::fixed << std::setprecision(5) << x2 << std::endl;
    }
    return 0;
}