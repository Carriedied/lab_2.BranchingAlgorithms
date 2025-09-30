#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

#pragma once
class SeriesCalculator_6
{
private: 
    static constexpr double EPSILON = 1e-4;

    double calculateTerm(int i, double x) const 
    {
        double numerator = (2 * i + 1) * pow(x, 2 * i);

        double denominator = factorial(i);

        return numerator / denominator;
    }

    double factorial(int n) const 
    {
        if (n <= 1) 
            return 1.0;

        double result = 1.0;

        for (int i = 2; i <= n; ++i) 
        {
            result *= i;
        }

        return result;
    }

    double analyticalFunction(double x) const 
    {
        return (1.0 + 2.0 * x * x) * exp(x * x);
    }

public:
    void computeAndCompare() const 
    {
        cout << fixed << setprecision(6);
        cout << "x\t\tSeries S\tAnalytical y\tDifference" << endl;

        for (double x = 0.1; x <= 1.0; x += 0.1) {
            double sum = 0.0;
            int i = 0;
            double term;

            do {
                term = calculateTerm(i, x);
                sum += term;
                ++i;
            } while (abs(term) >= EPSILON);

            double y = analyticalFunction(x);

            double diff = abs(sum - y);

            cout << x << "\t" << sum << "\t" << y << "\t" << diff << endl;
        }
    }
};

