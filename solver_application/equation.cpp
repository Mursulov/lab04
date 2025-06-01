#include <iostream>
#include <iomanip>
#include "solver.h"

int main() {
    float a, b, c, x1, x2;
    std::cin >> a >> b >> c;
    float d = b * b - 4 * a * c;
    if (d < 0)
        std::cout << "No real roots\n";
    else {
        solve(a, b, c, x1, x2);
        std::cout << std::fixed << std::setprecision(5)
                  << "x1 = " << x1 << '\n'
                  << "x2 = " << x2 << '\n';
    }
    return 0;
}
