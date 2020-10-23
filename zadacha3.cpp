#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a[3], h, b, max = -1, min = INT_MAX, Res, x;
	int n;
	cout << "Введите значение h,b и n: ";
	cin >> h >> b >> n;
	cout << "Введите значения a1, a2 и a3: ";
	cin >> a[0] >> a[1] >> a[2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			x = b + j * h;
			Res = 0.8 + 2 * sin(x) - 5.5 * sin(a[i]) * sin(a[i]);
			if (Res < min)
				min = Res;
			if (Res > max)
				max = Res;
		}
	}
	cout << "Максимальное значение - " << max;
	cout << "Минимальное значение - " << min;
}

