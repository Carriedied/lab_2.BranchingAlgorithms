#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#pragma once
class PointInRegionChecker_9
{
public:
    bool isInRegion(double x, double y) const
    {
        if (x <= 0)
        {
            double max_y = (x + 2.0) / 2.0;

            return abs(y) <= max_y;
        }
        else
        {
            return (x * x + y * y <= 1.0);
        }
    }

    void checkPoint(double x, double y) const
    {
        bool inside = isInRegion(x, y);

        cout << "Точка (" << x << ", " << y << "): " << (inside ? "YES" : "NO") << endl;
    }
};

