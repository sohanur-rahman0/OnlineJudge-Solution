#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x * sin(x) + cos(x);
}
double derivative_f(double x)
{
    return x * cos(x) + sin(x) - sin(x);
}
int main()
{
    double x0, x;
    cout << "Choose a value of x0= ";
    cin >> x0;
    int i;
    cout << "  n \tXn\tf(Xn)\t     Xn+1" << endl;

    for (i = 0; i < 3; i++)
    {

        x = x0 - (f(x0) / (derivative_f(x0) * 1.0));
        printf("  %d\t%.4lf  %.9lf  %.4lf\n", i, x0, f(x0), x);
        x0 = x;
    }

    printf("\n\n");
    printf("The root is : %.4lf", x);
}
