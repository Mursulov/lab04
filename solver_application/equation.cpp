
#include <iostream>
#include <iomanip>
#include <sstream>
#include "formatter_ex.h"
#include "solver.h"

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    std::cin >> a >> b >> c;

    float x1 = 0;
    float x2 = 0;


    try
    {
        solve(a, b, c, x1, x2);

        std::ostringstream oss1, oss2;
        oss1 << std::fixed << std::setprecision(5) << x1;
        oss2 << std::fixed << std::setprecision(5) << x2;
        formatter(std::cout, "x1 = " + oss1.str());
        formatter(std::cout, "x2 = " + oss2.str());
    }
    catch (const std::logic_error& ex)
    {
        formatter(std::cout, ex.what());
    }

    return 0;
}