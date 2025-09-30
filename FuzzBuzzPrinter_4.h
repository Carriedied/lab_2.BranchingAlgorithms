#include <iostream>

using namespace std;

#pragma once
class FuzzBuzzPrinter_4
{
public:
    void printWhile() const
    {
        int i = 1;

        cout << "=== While ===" << endl;

        while (i <= 500)
        {
            if (i % 5 == 0 && i % 7 == 0)
            {
                cout << "fuzzbuzz" << endl;
            }
            else if (i % 5 == 0)
            {
                cout << "fuzz" << endl;
            }
            else if (i % 7 == 0)
            {
                cout << "buzz" << endl;
            }
            else
            {
                cout << i << endl;
            }

            ++i;
        }
    }

    void printDoWhile() const
    {
        int i = 1;

        cout << "\n=== Do-While ===" << endl;

        do {
            if (i % 5 == 0 && i % 7 == 0)
            {
                cout << "fuzzbuzz" << endl;
            }
            else if (i % 5 == 0)
            {
                cout << "fuzz" << endl;
            }
            else if (i % 7 == 0)
            {
                cout << "buzz" << endl;
            }
            else
            {
                cout << i << endl;
            }
            ++i;
        } while (i <= 500);
    }

    void printFor() const
    {
        cout << "\n=== For ===" << endl;

        for (int i = 1; i <= 500; ++i)
        {
            if (i % 5 == 0 && i % 7 == 0)
            {
                cout << "fuzzbuzz" << endl;
            }
            else if (i % 5 == 0)
            {
                cout << "fuzz" << endl;
            }
            else if (i % 7 == 0)
            {
                cout << "buzz" << endl;
            }
            else
            {
                cout << i << endl;
            }
        }
    }
};

