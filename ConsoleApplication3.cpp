// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    float a, b, c, x, f;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть A" << endl;
    cin >> a;
    cout << "Введіть B" << endl;
    cin >> b;
    cout << "Введіть C" << endl;
    cin >> c;
    cout << "Введіть X" << endl;
    cin >> x;
    cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl << "x=" << x << endl;
    if (x - 1 < 0 && x - 1 != 0 && b - x != 0) f = a * x * x + b;
    else if (x - 1 > 0 && x - 1 != 0 && b + x == 0 && x != 0) f = (x - a) / x;
    else if (c != 0) f = x / c;
    cout << "F=" << f << endl;
}




