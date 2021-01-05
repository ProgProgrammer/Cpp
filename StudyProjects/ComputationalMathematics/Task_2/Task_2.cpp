#include <iostream>
#include <cmath>
using namespace std;

const int N = 7;
double X[N] = { 1, 2, 3, 4, 5, 6, 5 };
double Y[N] = { 3, 7, 13, 21, 31, 43, 57 };
double x_0 = 1.5;

double lagrange(int n, double X[], double Y[], double x)
{
	double result = 0.0;
	double h = X[1] - X[0];

	for (int i = 0; i < n; i++)
	{
		double P = 1;

		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				P *= (x - X[0] - h * j) / h / (i - j);
			}
		}
		result += P * Y[i];
	}

	return result;
}

int main(void)
{
	setlocale(LC_ALL, "Russian");
	double f_0 = lagrange(N, X, Y, x_0);
	cout << "Приближенное значение функции в точке" << endl;
	cout << "В точке x_0 = "; 
	cout << x_0;
	cout << "   f_0 = ";
	cout << f_0 << endl;
	return 0;
}