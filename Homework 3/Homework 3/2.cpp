#include <iostream>
using namespace std;
void main2()
{
	int x, unit, des, sot, sum;
	setlocale(0, "");
	cout << "������� ����������� �����-> ";
	cin >> x;
	unit = x % 10;
	x = x / 10;
	des = x % 10;
	x = x / 10;
	sot = x % 10;
	cout << "�����: " << sot << "\n" << "������� " << des << "\n" << "������� " << unit << endl;
	cout << "����� ����: " <<  unit + des + sot << "\n";
	cout << "������������ ����: " << unit * des * sot << endl;
}
