#include <iostream>
using namespace std;
void main()
{
	double tetr;
	double cov;
	int complect;

	setlocale(0, "");
	cout << "���������� ��������� �������. \n������� �������� ������ : \n";
	cout << "���� ������� (���.) -> ";
	cin >> tetr;
	cout << "���� �������(���.) -> ";
	cin >> cov;
	cout << "���������� ���������� (��.) -> ";
	cin >> complect;
	double s = (tetr + cov) * complect;
	cout << "��������� �������: " << s << "���." << endl;
}

