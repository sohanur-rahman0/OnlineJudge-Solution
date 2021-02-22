#include <bits/stdc++.h>
using namespace std;

double f(double v)
{
    return pow(v, 3) - v - 4;
}
int main()
{

    long long int i = 1;

stepa:
    double a, b, c;
    cout << "Enter two guessing number: ";
    cin >> a >> b;
    if (f(a) * f(b) > 0)
    {
        goto stepa;
    }
    double x1 = 0, x2, Er;

    cout << "iteration\ta\tb\tc\tf(c)\tError\n";
    while (1)
    {

        if (Er <= 0.001)
            break;
        c = (a + b) / (2 * 1.0);

        cout << " " << i << "\t\t";
        x2 = c;
        printf("%.4lf\t%.4lf\t%.4lf", a, b, c);

        Er = abs(x1 - x2);
        printf("\t%.4lf    %.3lf", f(c), Er);

        if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        x1 = x2;
        i++;
    }
    cout << "root is : " << c << endl;
}