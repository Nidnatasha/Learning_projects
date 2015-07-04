#include<iostream>
using namespace std;
void main4()
{
	setlocale(0, "");
	float v;
	cout << "ѕересчет рассто€ни€ из верст в километры." << endl;
	cout << "¬ведите рассто€ние в верстах -> ";
	cin >> v;
	cout << v << " верст Ч это " << v*1066.8/1000 <<" км" << endl;
}