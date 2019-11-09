// CPP program to find sum of
// harmonic series using recursion
#include<bits/stdc++.h>
using namespace std;

float sum(float n)
{
    // Base condition
    if (n < 2)
        return 1;

    else
        return 1 / n + (sum(n - 1));
}

// Driven Code
int main()
{
    cout << (sum(8)) << endl;
    cout << (sum(10)) << endl;
    return 0;
}
