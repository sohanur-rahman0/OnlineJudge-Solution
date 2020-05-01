#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    string str;
    int c = 0;
    cin >> str;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '7' || str[i] == '4')c++;
    }
    if (c == 7 || c == 4)flag = true;
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

