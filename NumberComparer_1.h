#include <iostream>
#include <string>

using namespace std;

#pragma once
class NumberComparer_1
{
public:
    void compare(int a, int b) const
    {
        if (a > 0 && b % 2 == 0)
        {
            cout << "да" << endl;
        }
        else
        {
            cout << "нет" << endl;
        }
    }
};

