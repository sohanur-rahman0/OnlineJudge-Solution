#include<bits/stdc++.h>
using namespace std;

float sum(float n)
{

    if (n < 2)
        return 1;

    else
        return 1 / n + (sum(n - 1));
}

// Driven Code
int main()
{
    cout << (sum(2147483647)) << endl;
    cout << (sum(2)) << endl;
    return 0;
}
