#include <iostream>
#include <vector>

using namespace std;

#pragma once
class PalindromeChecker_2
{
public:
    bool isPalindrome(int n) const
    {
        if (n < 0) 
            return false;

        int original = n;
        int reversed = 0;

        while (n != 0)
        {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }

        return original == reversed;
    }

    void check(int n) const
    {
        if (isPalindrome(n))
        {
            cout << "да, число является полиндромом" << endl;
        }
        else
        {
            cout << "нет, число не является полиндромом" << endl;
        }
    }
};

