#include<iostream>
using namespace std;
void main3()
{
	setlocale(0, ""); 
	float a;
	float b;
	cout << "���������� ��������� �������." << endl;
	cout << "������� �������� ������: " << endl;
	cout << "���� ������ ���������� ����� (���.) -> ";
	cin >> a;
	cout << "��� ����� (��.) -> ";
	cin >> b;
	cout << "��������� �������: " << a * b << endl;
}