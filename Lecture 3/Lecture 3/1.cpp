#include <iostream>
using namespace std;
void main2()
{
	double tetr;
	double pens;
	int coltetr;
	int colpens;
	int grn;
	double cop;

	setlocale(0, "");
	cout << "Вычисление стоимости покупки. \nВведите исходные данные : \n";
	cout << "Цена тетради (грн.) -> ";
	cin >> tetr;
	cout << "Количество тетрадей -> ";
	cin >> coltetr;
	cout << "Цена карандаша (грн.) -> ";
	cin >> pens;
	cout << "Количество карандашей -> ";
	cin >> colpens;
	double s = (tetr * coltetr) + (pens * colpens);
	grn = s;
	cop = (s - grn) * 100;
	cout << "Стоимость покупки: " << grn << "грн." << cop << "коп." << endl;
}