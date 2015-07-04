#include <iostream>
using namespace std;
void main()
{
	float rast;
	float bens;
	float  csena;

	setlocale(0, "");
	cout << "ВычислВычисление стоимости поездки на дачу и обратно.\n";
	cout << "Расстояние до дачи (км) -> ";
	cin >> rast;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> bens;
	cout << "Цена литра бензина (грн.) ";
	cin >> csena;
	float s = ((rast * bens) / 100) * csena;
	cout << "Поездка на дачу и обратно обойдется в " << s << "грн." << endl;
}