#include<iostream>
using namespace std;
void main2()
{
	setlocale(0, "");
	int a;
	int b;
	cout << "Введите целое положительное число->";
	cin >> a;
	cout << "Введите целое положительное число->";
	cin >> b;
	cout << "Сумма: "<<a + b<<endl;
	cout << "Произведение: "<<a*b << endl;
	cout << "Среднее арифметическое: "<<(a + b) / 2 << endl;
}