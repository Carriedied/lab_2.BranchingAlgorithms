#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#pragma once
class FunctionTableGenerator_5
{
    public: void generate() const 
    {
        cout << fixed << setprecision(2);

        cout << "x\t\ty" << "\n";

        for (double x = -2.0; x <= 2.0; x += 0.5) 
        {
            double y = -2.4 * x * x + 5 * x - 3;

            cout << x << "\t\t" << y << "\n";
        }
    }
};

