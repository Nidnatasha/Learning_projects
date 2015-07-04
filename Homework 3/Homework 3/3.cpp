#include <iostream>
using namespace std;
void main3()
{
	double grn;
	const double const_d = 21.0154;
	const double const_e = 23.5414;
	const double const_r = 0.3834;
	setlocale(0, "");
	cout << "Сумма в гривнах: ";
	cin >> grn;
	cout << "Доллары: " << grn / const_d << "\n" << "Евро: " << grn / const_e << "\n" << "Рубли: " << grn / const_r << endl;
}
