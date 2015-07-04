#include <iostream>
using namespace std;
void main()
{
	double tetr;
	double cov;
	int complect;

	setlocale(0, "");
	cout << "Вычисление стоимости покупки. \nВведите исходные данные : \n";
	cout << "Цена тетради (грн.) -> ";
	cin >> tetr;
	cout << "Цена обложки(грн.) -> ";
	cin >> cov;
	cout << "Количество комплектов (шт.) -> ";
	cin >> complect;
	double s = (tetr + cov) * complect;
	cout << "Стоимость покупки: " << s << "грн." << endl;
}

