#include <iostream>

using namespace std;

#pragma once
class ExpressionEvaluator_7
{
public:
    void evaluateWithWhile() const {

        cout << "=== While ===" << endl;

        int a = 1;

        while (a <= 19) 
        {
            if (a != 4) 
            {
                double result = (3.0 + a) / pow(a - 4, 2);

                cout << "a = " << a << ": " << result << endl;
            }
            else 
            {
                cout << "a = " << a << ": undefined (division by zero)" << endl;
            }
            a += 3;
        }
    }

    void evaluateWithDoWhile() const 
    {
        cout << "\n=== Do-While ===" << endl;

        int a = 1;

        do {
            if (a != 4) 
            {
                double result = (3.0 + a) / pow(a - 4, 2);

                cout << "a=" << a << ": " << result << endl;
            }
            else 
            {
                cout << "a=" << a << ": undefined (division by zero)" << endl;
            }

            a += 3;
        } while (a <= 19);
    }

    void evaluateWithFor() const 
    {
        cout << "\n=== For ===" << endl;

        for (int a = 1; a <= 19; a += 3) 
        {
            if (a != 4) 
            {
                double result = (3.0 + a) / pow(a - 4, 2);

                cout << "a=" << a << ": " << result << endl;
            }
            else 
            {
                cout << "a=" << a << ": undefined (division by zero)" << endl;
            }
        }
    }
};

