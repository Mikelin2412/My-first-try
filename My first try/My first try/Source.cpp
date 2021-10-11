#include <iostream>
#include <math.h>
#include <iomanip> //функция установки ширины
using namespace std;

int main()
{
	double a, b, h, y, s, x, r;
	int k, n;
	const double PI = 3.141592653589793;
	cout << "Enter a, b, h" << endl;
	cin >> a >> b >> h;
	cout << "n=";
	cin >> n;
	cout << setw(20) << "x" << setw(20) << "y" << setw(20) << "s" << setw(20) << "(y-s)" << endl;//setw - вывод строчки
	x = a;
	while (x <= b)
	{
		y = -(log(1 - 2 * x * cos(PI / 3) + x * x) / 2);//r - член ряда, s - сумма
		s = 0;
		r = 1;
		for (k = 1; k <= n; k++)
		{
			r *= x;
			s += r * cos(PI * k / 3) / k;
		}
		cout << setw(20) << x << setw(20) << y << setw(20) << s << setw(20) << fabs(y - s) << endl;
		x += h;
	}
	system("pause");
	return 0;
}