#include<iostream>
// следующим этапом стало подключение другой библиотеки для того, чтоб далее использовать, если необходимо отобразить 2 (или более) знаков после запятой(http://www.cplusplus.com/reference/iomanip/setprecision/)
#include <iomanip>
using namespace std;
void main5()
{
	setlocale(0, "");
	float a;
	float h;
	cout << "Вычисление площади треугольника. " << endl;
	cout << "Введите исходные данные: " << endl;
	cout << "Основание (см) -> ";
	cin >> a;
	cout << "Высота (см) -> ";
	cin >> h;
	cout << "Площадь треугольника " << fixed << setprecision(2) << 0.5 * a * h << " кв.см." << endl;
	// << fixed << setprecision(2) взяла с таблицы 2 из выше указанного сайта
}