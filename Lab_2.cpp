#include <iostream>
#include "NumberComparer_1.h"
#include "PalindromeChecker_2.h"
#include "RightTriangleChecker_3.h"
#include "FuzzBuzzPrinter_4.h"
#include "FunctionTableGenerator_5.h"
#include "SeriesCalculator_6.h"
#include "ExpressionEvaluator_7.h"
#include "SequenceGenerator_8.h"
#include "PointInRegionChecker_9.h"
#include "NaturalLogCalculator_10.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int choice;

    cout << "Выберите задачу (1-10): ";
    cin >> choice;

    switch (choice) 
    {
        case 1: 
        {
            int a, b;

            cout << "Введите два целых числа: ";
            cin >> a >> b;

            NumberComparer_1 task1;

            task1.compare(a, b);

            break;
        }
        case 2: 
        {
            int n;

            cout << "Введите натуральное число: ";
            cin >> n;

            PalindromeChecker_2 task2;
            task2.check(n);
            break;
        }
        case 3: 
        {
            int a, b, c;

            cout << "Введите три стороны треугольника: ";
            cin >> a >> b >> c;

            RightTriangleChecker_3 task3;

            auto res = task3.validate(a, b, c);

            task3.printResult(res);

            break;
        }
        case 4: 
        {
            cout << "=== Задача 4 ===" << endl;

            FuzzBuzzPrinter_4 task4;

            cout << "While: ";
            task4.printWhile();

            cout << "Do-While: ";
            task4.printDoWhile();

            cout << "For: ";
            task4.printFor();

            break;
        }
        case 5: 
        {
            cout << "\n=== Задача 5 ===" << endl;

            FunctionTableGenerator_5 task5;

            task5.generate();

            break;
        }
        case 6: 
        {
            cout << "\n=== Задача 6 ===" << endl;

            SeriesCalculator_6 task6;

            task6.computeAndCompare();

            break;
        }
        case 7: 
        {
            cout << "\n=== Задача 7 ===" << endl;

            ExpressionEvaluator_7 task7;

            task7.evaluateWithWhile();
            task7.evaluateWithDoWhile();
            task7.evaluateWithFor();

            break;
        }
        case 8: 
        {
            cout << "\n=== Задача 8 ===" << endl;

            SequenceGenerator_8 task8;

            task8.generateFirst15Terms();

            break;
        }
        case 9: 
        {
            double x, y;

            cout << "Введите координаты точки (x y): ";
            cin >> x >> y;

            PointInRegionChecker_9 task9;

            task9.checkPoint(x, y);

            break;
        }
        case 10: 
        {
            cout << "\n=== Задача 10 ===" << endl;

            NaturalLogCalculator_10 task10;

            task10.compareAtPoints();

            break;
        }
        default:
            cout << "Неверный номер задачи." << endl;
            break;
        }

    return 0;
}
