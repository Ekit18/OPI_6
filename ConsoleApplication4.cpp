// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "windows.h"
using namespace std;
#define _USE_MATH_DEFINES   
#include <math.h>  

int main()
{
    double x, y, z;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введіть будь ласка X\n");
    scanf_s("%lf", &x);
    printf("Введіть будь ласка Y\n");
    scanf_s("%lf", &y);
    printf("Введіть будь ласка Z\n");
    scanf_s("%lf", &z);
    int(a) = pow(x, 3) * pow(tan(pow(x + y, 2)), 2) + z / pow(x + y, 1 / 2.) - 2 * tan((25 * M_PI) / 180);
    printf("Вираз=%d\n", a);
}
