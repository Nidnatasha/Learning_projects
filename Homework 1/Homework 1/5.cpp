#include<iostream>
// ��������� ������ ����� ����������� ������ ���������� ��� ����, ���� ����� ������������, ���� ���������� ���������� 2 (��� �����) ������ ����� �������(http://www.cplusplus.com/reference/iomanip/setprecision/)
#include <iomanip>
using namespace std;
void main5()
{
	setlocale(0, "");
	float a;
	float h;
	cout << "���������� ������� ������������. " << endl;
	cout << "������� �������� ������: " << endl;
	cout << "��������� (��) -> ";
	cin >> a;
	cout << "������ (��) -> ";
	cin >> h;
	cout << "������� ������������ " << fixed << setprecision(2) << 0.5 * a * h << " ��.��." << endl;
	// << fixed << setprecision(2) ����� � ������� 2 �� ���� ���������� �����
}