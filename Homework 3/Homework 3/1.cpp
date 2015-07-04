#include <iostream>
#include <math.h>
using namespace std;
void main1()
{
	double x, y;
	setlocale(0, "");
	cout << "¬ведите значение Ђхї-> ";
	cin >> x;
	y = -2.7*pow(x, 3) + 0.23*pow(x, 2) - 1.4;
	cout << "y=" << y << endl;
}
