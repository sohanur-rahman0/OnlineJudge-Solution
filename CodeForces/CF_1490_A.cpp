#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int last;
        cin >> last;
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            int nw;
            cin >> nw;
            int a = min(last, nw), b = max(last, nw);
            while (a * 2 < b)
            {
                count++;
                a *= 2;
            }
            last = nw;
        }

        cout << count << endl;
    }
}