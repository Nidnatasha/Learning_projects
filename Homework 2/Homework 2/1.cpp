#include <iostream>
using namespace std;
void main()
{
	float rast;
	float bens;
	float  csena;

	setlocale(0, "");
	cout << "���������������� ��������� ������� �� ���� � �������.\n";
	cout << "���������� �� ���� (��) -> ";
	cin >> rast;
	cout << "������ ������� (������ �� 100 �� �������) -> ";
	cin >> bens;
	cout << "���� ����� ������� (���.) ";
	cin >> csena;
	float s = ((rast * bens) / 100) * csena;
	cout << "������� �� ���� � ������� ��������� � " << s << "���." << endl;
}