#include <iostream>
using namespace std;
void main1()
{
	/*float a;
	setlocale(0, "");
	cout << "������� ����� ������� -> ";
	cin >> a;
	int grn, cop;
	grn = a;
	cop = (a - grn) * 100;
	cout << "���� �������: " << grn << "���." << cop << "���." << endl;*/

	double a;
	double b;
	int grn;
	int cop;

	setlocale(0, "");
	cout << "������� ���� 1 �������->";
	cin >> a;
	cout << "������� ���� 2 �������->";
	cin >> b;
	double s = a + b;
	grn = s;
	cop = (s - grn) * 100;
	cout << "����� �������: " << grn << "���." << cop << "���." << endl;

	
}