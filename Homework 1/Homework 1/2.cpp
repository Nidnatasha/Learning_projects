#include<iostream>
using namespace std;
void main2()
{
	setlocale(0, "");
	int a;
	int b;
	cout << "������� ����� ������������� �����->";
	cin >> a;
	cout << "������� ����� ������������� �����->";
	cin >> b;
	cout << "�����: "<<a + b<<endl;
	cout << "������������: "<<a*b << endl;
	cout << "������� ��������������: "<<(a + b) / 2 << endl;
}