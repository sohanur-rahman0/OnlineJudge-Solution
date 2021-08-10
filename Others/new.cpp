#include <bits/stdc++.h>
using namespace std;
double g(double x)
{
    return (sin(x) + 10) / (10.0);
}
int main()
{
    int i = 1;
    double n, x, error;
    cout << "Choose the values of x0: ";
    cin >> n;
    cout << "\n i\tXn\tXn+1\tError" << endl;
    while (1)
    {
        x = g(n);
        error = abs(x - n);
        printf(" %d\t%.4lf\t%.4lf  %.4lf\n", i, n, x, error);
        if (error <= 0.001)
        {
            break;
        }
        i++;
        n = x;
    }
    printf("\nThe root is : %.4lf\n\n", x);
}
