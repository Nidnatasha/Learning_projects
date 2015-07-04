#include <iostream>
using namespace std;
void main1()
{
	/*float a;
	setlocale(0, "");
	cout << "Введите сумму покупки -> ";
	cin >> a;
	int grn, cop;
	grn = a;
	cop = (a - grn) * 100;
	cout << "Ваша покупка: " << grn << "грн." << cop << "коп." << endl;*/

	double a;
	double b;
	int grn;
	int cop;

	setlocale(0, "");
	cout << "Введите цену 1 покупки->";
	cin >> a;
	cout << "Введите цену 2 покупки->";
	cin >> b;
	double s = a + b;
	grn = s;
	cop = (s - grn) * 100;
	cout << "Сумма покупки: " << grn << "грн." << cop << "коп." << endl;

	
}