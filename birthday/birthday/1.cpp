#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	int burth, month, age, rasnitsa, a, b, mes;
	int const today = 2015, const m = 7;
	setlocale(0, "");
	cout << "¬ведите год рождени€ ->";
	cin >> burth;
	cout << "¬ведите мес€ц рождени€ ->";
	cin >> month;
	age = today * 12 + m;
	b = burth* 12 + month;
	rasnitsa = age - b;
	a = rasnitsa / 12;
	mes = rasnitsa % 12;
	cout << "¬ам " << a << " лет " << mes << " мес€цев" << endl;
}
