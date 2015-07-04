#include <iostream>
using namespace std;
void main()
{	
	setlocale(0, "");
	int a, b, c, p;
	cout << "¬ведите координату точки a -> ";
	cin >> a;
	cout << "¬ведите координату точки b -> ";
	cin >> b;
	cout << "¬ведите координату точки c -> ";
	cin >> c;
	cout << "¬ведите координату точки p -> ";
	cin >> p;
	bool out1 = (p <= a);
	bool out2 = (p >= a && p <= b);
	cout << "a) " << out1 << "\n";
	cout << "b) " << (p >= a && p <= b);
	cout << "c) " << (p >= a && p <= b || p >= b && p <= c);
	cout << "d) " << (p <= a || p >= c);
	cout << "e) " << (p >= a && p <= b || p >= c) << endl;
}