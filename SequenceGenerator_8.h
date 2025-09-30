#include <iostream>

using namespace std;

#pragma once
class SequenceGenerator_8
{
public:
    void generateFirst15Terms() const 
    {
        cout << "i\ta_i\t\tb_i" << endl;

        double a_prev = 1.0, b_prev = 1.0;

        cout << "1\t" << a_prev << "\t\t" << b_prev << endl;

        for (int i = 2; i <= 15; ++i) 
        {
            double a_curr = 3 * b_prev + 2 * a_prev;
            double b_curr = 2 * a_prev + b_prev;

            cout << i << "\t" << a_curr << "\t\t" << b_curr << endl;

            a_prev = a_curr;
            b_prev = b_curr;
        }
    }
};

