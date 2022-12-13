#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Ukr");
	double x, y, min, max;
	cout << "Введiть значення х= ";
	cin >> x;
	cout << "Введiть значення y=";
	cin >> y;
	{
	if (x <= pow((x + y), 2)) min = x;
	else min = pow((x + y), 2);
	}
	{
		if (x >= pow(y, 3)) max = y;
		else max = pow(y, 3);
	}
	cout << "F= " << min / ((pow(x, 2) + max));
}

