#include <iostream>
using namespace std;
void main4()
{
	double rost, a;
	const double konst = 100;
	setlocale(0, "");
	cout << "������� ��� ���� � c�.: ";
	cin >> rost;
	a = rost / konst;
	int m, cm;
	m = a;
	cm = (a - m) * 100;
	cout << "��� ���� - " << m << "� " << cm << "c�" << endl;
}