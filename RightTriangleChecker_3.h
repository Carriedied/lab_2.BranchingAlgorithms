#include <iostream>
#include <algorithm>

using namespace std;

#pragma once
class RightTriangleChecker_3
{
public:
    enum class Result { YES, NO, UNDEFINED };

    Result validate(int a, int b, int c) const
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            return Result::UNDEFINED;
        }

        if (!(a + b > c && a + c > b && b + c > a))
        {
            return Result::UNDEFINED;
        }

        int sides[3] = { a, b, c };
        sort(sides, sides + 3);

        int leg1 = sides[0];
        int leg2 = sides[1];
        int hypotenuse = sides[2];

        if (leg1 * leg1 + leg2 * leg2 == hypotenuse * hypotenuse)
        {
            return Result::YES;
        }
        else
        {
            return Result::NO;
        }
    }

    void printResult(Result res) const
    {
        switch (res)
        {
        case Result::YES: cout << "YES" << endl; break;
        case Result::NO: cout << "NO" << endl; break;
        case Result::UNDEFINED: cout << "UNDEFINED" << endl; break;
        }
    }
};

