#include <iostream>
#include "windows.h"
#include "math.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double b, y, x, z;
	cout<<"¬вед≥ть x: ";
	cin>>x;
	cout<<"¬вед≥ть y: ";
	cin>>y;
	z = pow(y, 3);
	b = (pow (z - x, 2) / pow(y - x, 3)) + ((abs(pow(y - x, 3))) / pow(x, 1. / 5));
	cout<<b;
}