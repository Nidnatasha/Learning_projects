#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	int burth, month, age, rasnitsa, a, b, mes;
	int const today = 2015, const m = 7;
	setlocale(0, "");
	cout << "������� ��� �������� ->";
	cin >> burth;
	cout << "������� ����� �������� ->";
	cin >> month;
	age = today * 12 + m;
	b = burth* 12 + month;
	rasnitsa = age - b;
	a = rasnitsa / 12;
	mes = rasnitsa % 12;
	cout << "��� " << a << " ��� " << mes << " �������" << endl;
}
