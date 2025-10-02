#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;

#pragma once
class NaturalLogCalculator_10
{
private:
    static constexpr double EPSILON = 1e-7;

    double series1(double x, int maxIter = 1000) const 
    {
        if (x <= 0) 
            return NAN;

        double sum = 0.0;

        for (int n = 0; n < maxIter; ++n) 
        {
            double numerator = pow(x - 1, 2 * n + 1);
            double denominator = (2 * n + 1) * pow(x + 1, 2 * n + 1);
            double term = 2.0 * numerator / denominator;

            sum += term;

            if (abs(term) < EPSILON) 
                break;
        }

        return sum;
    }

    double series2(double x, int maxIter = 1000) const 
    {
        if (!(x > 0 && x <= 2)) 
            return NAN;

        double sum = 0.0;

        for (int n = 0; n < maxIter; ++n) 
        {
            double term = pow(-1, n) * pow(x - 1, n + 1) / (n + 1);

            sum += term;

            if (abs(term) < EPSILON) 
                break;
        }
        return sum;
    }

    double series3(double x, int maxIter = 1000) const 
    {
        if (x <= 0.5) 
            return NAN;

        double sum = 0.0;

        for (int n = 0; n < maxIter; ++n) 
        {
            double numerator = pow(x - 1, n + 1);
            double denominator = (n + 1) * pow(x, n + 1);
            double term = numerator / denominator;

            sum += term;

            if (abs(term) < EPSILON) 
                break;
        }

        return sum;
    }

public:
    void compareAtPoints() const {
        vector<double> points = { 1.0, 1.2, 1.5, 1.8, 2.0 };
        cout << setw(8) << "x"
             << setw(12) << "Series1"
             << setw(12) << "Series2"
             << setw(12) << "Series3"
             << setw(12) << "log(x)"
             << setw(12) << "Error1"
             << setw(12) << "Error2"
             << setw(12) << "Error3" << endl;

        for (double x : points) 
        {
            double s1 = series1(x);
            double s2 = series2(x);
            double s3 = series3(x);
            double exact = log(x);

            double e1 = abs(s1 - exact);
            double e2 = abs(s2 - exact);
            double e3 = abs(s3 - exact);

            cout << setw(8) << x
                 << setw(12) << s1
                 << setw(12) << s2
                 << setw(12) << s3
                 << setw(12) << exact
                 << setw(12) << e1
                 << setw(12) << e2
                 << setw(12) << e3 << std::endl;
        }
    }
};

