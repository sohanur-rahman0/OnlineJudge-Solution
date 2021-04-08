#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{

    int n = 5, i;
    float Y[20], sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;
    float a, b, A;
    float x[5] = {1.0, 3.0, 5.0, 7.0, 9.0};
    float y[5] = {2.473, 6.722, 18.274, 49.673, 135.026};

    for (i = 0; i <= n - 1; i++)
    {
        Y[i] = log(y[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        sumx = sumx + x[i];
        sumx2 = sumx2 + x[i] * x[i];
        sumy = sumy + Y[i];
        sumxy = sumxy + x[i] * Y[i];
    }
    A = ((sumx2 * sumy - sumx * sumxy) * 1.0 / (n * sumx2 - sumx * sumx) * 1.0);
    b = ((n * sumxy - sumx * sumy) * 1.0 / (n * sumx2 - sumx * sumx) * 1.0);
    a = exp(A);
    printf("\n\n The curve is Y= %4.3fe^%4.3fX", a, b);
    return (0);
}