#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define pi acos(-1.0)
#define all(v) v.begin(), v.end()
#define rall(v) v.rend(), v.rend()
#define contains(a, b) (find(a.begin(), a.end(), b != a.end()))
#define minimum(a) *min_element(a.begin(), a.end())
#define maximum(a) *max_element(a.begin(), a.end())
#define precision(n) cout << fixed << setprecision(n)
#define toUpper(str) transform(str.begin(), str.end(), ::toupper);
#define toLower(str) transform(str.begin(), str.end(), ::tolower);

template <class T>
T MAX(T a, T b)
{
    return (a > b ? a : b);
}
template <class T>
T MIN(T a, T b) { return (a < b ? a : b); }
template <class T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
template <class T>
T lcm(T a, T b) { return (b / gcd(a, b)) * a; }
template <class T>
T toInt(T n)
{
    int v;
    stringstream stream;
    stream << n;
    stream >> v;
    return v;
}
template <class T>
T toStr(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dic;
typedef pair<int, int> pii;
typedef priority_queue<int, vector<int>, greater<int>> pq;

string BigSum(string a, string b)
{
    string sum = "";
    if (a.size() > b.size())
        swap(a, b);
    int len1 = a.size();
    int len2 = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; a[i]; i++)
    {
        int s = ((a[i] - '0') + (b[i] - '0') + carry);
        sum.push_back(s % 10 + '0');
        carry = s / 10;
    }
    for (int i = len1; b[i]; i++)
    {
        int s = (b[i] - '0') + carry;
        sum.push_back(s % 10 + '0');
        carry = s / 10;
    }
    if (carry)
        sum.push_back(carry + '0');
    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    string a, b;
    while (tc--)
    {
        cin >> a >> b;
        //cout<<a<<" "<<b<<endl;

        bool flagA = false, flagB = false;

        int la = a.size();
        int lb = b.size();

        string aa, bb;

        for (int i = la - 1; i >= 0; i--)
        {
            if (a[i] >= '1' && a[i] <= '9')
            {
                flagA = true;
            }

            if (flagA)
            {
                aa += a[i];
            }
        }

        for (int i = lb - 1; i >= 0; i--)
        {
            if (b[i] >= '1' && b[i] <= '9')
            {
                flagB = true;
            }

            if (flagB)
            {
                bb += b[i];
            }
        }

        string ans = BigSum(aa, bb);

        int lans = ans.size();
        string correct = "";
        bool flagAns = false;

        for (int i = lans - 1; i >= 0; i--)
        {
            if (ans[i] >= '1' && ans[i] <= '9')
            {
                flagAns = true;
            }

            if (flagAns)
            {
                correct += ans[i];
            }
        }

        cout << correct << endl;
    }
}
