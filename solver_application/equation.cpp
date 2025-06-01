#include <iostream>
#include <iomanip>
#include "solver.h"

int main() {
    float a, b, c, x1, x2;
    std::cin >> a >> b >> c;
    float d = b * b - 4 * a * c;
    if (d < 0) {
        std::cout << "No real roots" << std::endl;
    } else {
        solve(a, b, c, x1, x2);
        std::cout << "x1 = " << std::fixed << std::setprecision(5) << x1 << std::endl;
        std::cout << "x2 = " << std::fixed << std::setprecision(5) << x2 << std::endl;
    }
    return 0;
}
