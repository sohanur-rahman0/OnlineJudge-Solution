#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n = 5;
	float x[] = {1891, 1901, 1911, 1921, 1931};

	float y[n][n];
	y[0][0] = 46;
	y[1][0] = 66;
	y[2][0] = 81;
	y[3][0] = 93;
	y[4][0] = 101;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}

	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << x[i]
			 << "\t";
		for (int j = 0; j < n - i; j++)
			cout << setw(4) << y[i][j]
				 << "\t";
		cout << endl;
	}

	return 0;
}
