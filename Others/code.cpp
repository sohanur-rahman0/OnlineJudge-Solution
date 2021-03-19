#include <bits/stdc++.h>
using namespace std;

double f(double v)
{
    return 4 * exp(-v) * sin(v) - 1;
}
int main()
{

    long long int i = 1;
    double a, b, c;

stepa:

    cout << "Enter two guessing number: ";
    cin >> a >> b;
    if (f(a) * f(b) > 0)
    {
        goto stepa;
    }
    double x1 = 0, x2, Er;

    cout << "iteration\ta\tb\tc\t\tf(c)\tError\n";
    while (1)
    {

        c = (a * f(b) - b * f(a)) / ((f(b) - f(a)) * (1.0));

        cout << " " << i << "\t\t";
        x2 = c;
        Er = abs(x1 - x2);
        printf("%.4lf\t%.4lf\t%lf", a, b, c);

        if (Er == abs(c))
            printf("\t%.4lf    NULL\n", f(c));

        else
            printf("\t%.4lf    %.3lf\n", f(c), Er);

        if (Er < 0.001)
            break;

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