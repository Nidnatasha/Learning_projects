#include<iostream>
using namespace std;
void main3()
{
	setlocale(0, ""); 
	float a;
	float b;
	cout << "Вычисление стоимости покупки." << endl;
	cout << "Введите исходные данные: " << endl;
	cout << "Цена одного килограмма яблок (грн.) -> ";
	cin >> a;
	cout << "Вес яблок (кг.) -> ";
	cin >> b;
	cout << "Стоимость покупки: " << a * b << endl;
}