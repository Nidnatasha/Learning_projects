#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	/*int a = 3, b = 5, c;*/
	/*c = ++a + b--;
	cout << c << endl;*/


	/*c = a++ + ++b;
	cout << c << endl;*/


	/*c = a%b*4 *++a/b--;
	cout << c << endl;*/


	/*int a;
	int desiatka;
	int edinitsa;
	int chislo;
	setlocale(0, "");
	cout << "������� ����� ���������� �����: ";
	cin >> a;
	desiatka = a / 10;
	edinitsa = a % 10;
	cout << "��������: \n" << desiatka << "������: " << edinitsa << endl;
	chislo = edinitsa * 10 + desiatka;
	cout << "�����:" << chislo << endl;*/


	/*int a;
	int sotnja;
	int desiatok;
	int edinitsa;
	int chislo;
	int ostatok;

	setlocale(0, "");
	cout << "������� ����� ���������� �����: ";
	cin >> a;
	sotnja = a / 100;
	ostatok = a % 100;
	desiatok = ostatok / 10;
	edinitsa = ostatok % 10;
	cout << "�����: " << sotnja << "��������: " << desiatok << "������: " << edinitsa << endl;
	chislo = edinitsa * 100 + desiatok * 10 + sotnja;
	cout << "�����:" << chislo << endl;*/


	double drob, rasnitsa;
	int chislo, tseloe, res;

	setlocale(0, "");
	cout << "������� ������� �����: ";
	cin >> drob;
	cout << "������� ��������, �� �������� ����� ���������: ";
	cin >> chislo;
	tseloe = drob;
	rasnitsa = drob - tseloe;
	res = rasnitsa * pow(10, chislo);
	cout << tseloe << "." << res << endl;
}