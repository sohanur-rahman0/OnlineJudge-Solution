#include <bits/stdc++.h>

#define ll long long int
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int attack[n];
        int health[n];
        vector<pair<int, int>> vect;

        ll herohealth = b;

        for (int i = 0; i < n; i++)
        {
            cin >> attack[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> health[i];
        }

        for (int i = 0; i < n; i++)
        {
            vect.push_back(make_pair(attack[i], health[i]));
        }

        sort(vect.begin(), vect.end());

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (b <= 0)
            {
                flag = true;
                break;
            }
            int x;
            x = vect[i].second / a;
            if (vect[i].second % a != 0)
            {
                x++;
            }

            int need = x - 1;

            if (need * vect[i].first >= b)
            {
                flag = true;
                break;
            }

            b -= x * vect[i].first;
        }

        if (!flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}