"main". ����� ���������� � ������������� ���������� ���������.
//
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    double a, b, c, x, f;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ A" << endl;
    cin >> a;
    cout << "������ B" << endl;
    cin >> b;
    cout << "������ C" << endl;
    cin >> c;
    cout << "������ X" << endl;
    cin >> x;
    cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl << "x=" << x << endl;
    if (x - 1 < 0 && x - 1 != 0 && b - x != 0) f = a * x * x + b;
    else if (x - 1 > 0 && x - 1 != 0 && b + x == 0 && x != 0) f = (x - a) / x;
    else if (c != 0) f = x / c;
    cout << "F=" << f << endl;
}




