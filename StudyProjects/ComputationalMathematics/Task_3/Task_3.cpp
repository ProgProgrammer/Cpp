#include <iostream>
#include <cmath>
using namespace std;

double fun(double x)
{
    // return exp(pow(-x, 2));
    return 1 / x;
}

double leftRectangle(double (*fun)(double x), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fun(a + (i - 1) * h);
    }
    return h * sum;
}

double rightRectangle(double (*fun)(double x), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fun(a + (i)*h);
    }
    return h * sum;
}

double sredRectangle(double (*fun)(double x), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fun(a + ((double)i - 1) * h + 0.5 * h);
    }
    return h * sum;
}

double trapRectangle(double (*fun)(double x), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.5 * (fun(a) + fun(b));
    for (int i = 1; i < n; i++)
    {
        sum += fun(a + (i)*h);
    }
    return h * sum;
}

double simpson(double (*fun)(double x), double a, double b, int n)
{
    double h = (b - a) / n; 
    double sum = (fun(a) + fun(b));
    double s1 = 0;
    double s2 = 0;
    for (int k = 2; k <= n - 2; k += 2)
    {
        s1 += fun(a + (k)*h);
    }
    for (int k = 1; k <= n - 1; k += 2)
    {
        s2 += fun(a + (k)*h);
    }
    return h * (sum + 2 * s1 + 4 * s2) / 3;
}

double getDelta(double i1, double i2, int p)
{
    return (i1 - i2) / p;
}

void outputValues(double i1, double i2, int p, double delta)
{
    cout << " I_h = " << i1 << endl;
    cout << " I_2h = " << i2 << endl;
    cout << " Delta_h = " << "(" << i1 << " - " << i2 << ")" << "/" << p << " = " << delta << endl;
}

int main()
{
    setlocale(LC_ALL, "russian");
    int rectCount = 10;
    int doubleRectCount = rectCount * 2;
    // double a = 0;
    // double b = 1;
    double a = 1;
    double b = 2;
    double p = 1;
    cout << endl << " 1.Метод левых прямоугольников." << endl << endl;
    double i1 = leftRectangle(fun, a, b, rectCount);
    double i2 = leftRectangle(fun, a, b, doubleRectCount);
    double delta = getDelta(i1, i2, p);
    outputValues(i1, i2, p, delta);
    cout << endl << " 2.Метод правых прямоугольников." << endl << endl;
    i1 = rightRectangle(fun, a, b, rectCount);
    i2 = rightRectangle(fun, a, b, doubleRectCount);
    delta = getDelta(i1, i2, p);
    outputValues(i1, i2, p, delta);
    cout << endl << " 3.Метод средних прямоугольников." << endl << endl;
    p = 3;
    i1 = sredRectangle(fun, a, b, rectCount);
    i2 = sredRectangle(fun, a, b, doubleRectCount);
    delta = getDelta(i1, i2, p);
    outputValues(i1, i2, p, delta);
    cout << endl << " 4.Метод трапеций." << endl << endl;
    i1 = trapRectangle(fun, a, b, rectCount);
    i2 = trapRectangle(fun, a, b, doubleRectCount);
    delta = getDelta(i1, i2, p);
    outputValues(i1, i2, p, delta);
    cout << endl << " 5.Метод Симпсона." << endl << endl;
    p = 15;
    if (doubleRectCount % 2)
    {
        doubleRectCount++;
    }
    i1 = simpson(fun, a, b, rectCount);
    i2 = simpson(fun, a, b, doubleRectCount);
    delta = getDelta(i1, i2, p);
    outputValues(i1, i2, p, delta);
    cin.get();
    return 0;
}

/*double getDelta(double i1, double i2)
{
    return abs(i1 - i2);
}

int main()
{
    int rectCount = 10;
    int doubleRectCount = rectCount * 2;
    double a = 0;
    double b = 1;

    double i1 = leftRectangle(fun, a, b, rectCount);
    double i2 = leftRectangle(fun, a, b, doubleRectCount);
    cout << "leftRectangle delta = " << getDelta(i1, i2) << endl;

    i1 = rightRectangle(fun, a, b, rectCount);
    i2 = rightRectangle(fun, a, b, doubleRectCount);
    cout << "rightRectangle delta = " << getDelta(i1, i2) << endl;

    i1 = sredRectangle(fun, a, b, rectCount);
    i2 = sredRectangle(fun, a, b, doubleRectCount);
    cout << "sredRectangle delta = " << getDelta(i1, i2) << endl;

    i1 = trapRectangle(fun, a, b, rectCount);
    i2 = trapRectangle(fun, a, b, doubleRectCount);
    cout << "trapRectangle delta = " << getDelta(i1, i2) << endl;

    i1 = simpson(fun, a, b, rectCount);
    i2 = simpson(fun, a, b, doubleRectCount);
    cout << "simpson delta = " << getDelta(i1, i2) << endl;

    cin.get();
    return 0;
}*/