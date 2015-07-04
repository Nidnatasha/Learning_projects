#include <iostream>
using namespace std;
void main4()
{
	double rost, a;
	const double konst = 100;
	setlocale(0, "");
	cout << "Введите Ваш рост в cм.: ";
	cin >> rost;
	a = rost / konst;
	int m, cm;
	m = a;
	cm = (a - m) * 100;
	cout << "Ваш рост - " << m << "м " << cm << "cм" << endl;
}