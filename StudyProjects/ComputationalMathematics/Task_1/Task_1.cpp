#include <iostream>
#include <cmath>
using namespace std;

double a = 0;
double b = 1.5;
double EPS = 0.01;
const int num_step = 100;
int numroot;
double mas_root[num_step];

double fun(double x)
{
	return x * x * x * x - 3 * x + 1;
}
double funprim(double x)
{
	return 4 * x * x * x - 3;
}

double NEWTON(double (*fun)(double x), double (*funprim)(double x), double x0, double EPS, int& niter)
{
	double xk = x0, fk, step, step1, q, fkprim;
	niter = 0;
	while (1) {
		niter++;
		fk = fun(xk); fkprim = funprim(xk);
		step = -fk / fkprim; xk += step;
		if (niter > 1) {
			q = step / step1;
			if (fabs(step * q / (1 - q)) < EPS)
				break;
		}
		step1 = step;
	}
	return xk;
}

void main(void)
{
	setlocale(LC_ALL, "russian");
	char temp;
	int i, niter;
	double mas_index[num_step];
	for (i = 0; i < num_step; i++)
		mas_index[i] = 0;
	numroot = 0;
	double x_current;
	double step = (b - a) / num_step;
	
	for (i = 0; i < num_step - 1; i++)
	{
		x_current = a + i * step;
		if (fun(x_current) * fun(x_current + step) < 0)
		{
			mas_index[numroot] = i; 
			numroot++;
		}
	}

	for (i = 0; i < numroot; i++)
	{
		x_current = a + mas_index[i] * step;
		mas_root[i] = NEWTON(fun, funprim, x_current + 0.5 * step, EPS, niter);
	}

	cout << "Найдено корней num_root="; cout << numroot;
	cout << " с точностью EPS="; cout << EPS << endl;
	cout << "Корни:" << endl;
	for (i = 0; i < numroot; i++) {
		cout << "x_"; cout << i + 1; cout << "="; cout << mas_root[i] << endl;
	}
	cout << "\n\nPress any symbol to finish";
	cin >> temp;
}