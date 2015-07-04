#include <iostream>
using namespace std;
void main2()
{
	int x, unit, des, sot, sum;
	setlocale(0, "");
	cout << "Введите трехзначное число-> ";
	cin >> x;
	unit = x % 10;
	x = x / 10;
	des = x % 10;
	x = x / 10;
	sot = x % 10;
	cout << "Сотни: " << sot << "\n" << "Десятки " << des << "\n" << "Единицы " << unit << endl;
	cout << "Сумма цифр: " <<  unit + des + sot << "\n";
	cout << "Произведение цифр: " << unit * des * sot << endl;
}
