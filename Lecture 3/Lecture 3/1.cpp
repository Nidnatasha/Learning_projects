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
	cout << "���������� ��������� �������. \n������� �������� ������ : \n";
	cout << "���� ������� (���.) -> ";
	cin >> tetr;
	cout << "���������� �������� -> ";
	cin >> coltetr;
	cout << "���� ��������� (���.) -> ";
	cin >> pens;
	cout << "���������� ���������� -> ";
	cin >> colpens;
	double s = (tetr * coltetr) + (pens * colpens);
	grn = s;
	cop = (s - grn) * 100;
	cout << "��������� �������: " << grn << "���." << cop << "���." << endl;
}