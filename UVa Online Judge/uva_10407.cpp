#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
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

int arr[1050];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;

    while(cin>>arr[0]){
        if(arr[0]==0){
            break;
        }

        int i=1,temp;
        while(true){
            cin>>temp;
            
            if(temp==0){
                break;
            } 

            arr[i] = temp;
            i++;

        }

        int g = 0,difference;

        for(int x=0; x<i-1; x++){
            difference = abs(arr[x] - arr[x+1]);
            g = __gcd(difference,g);    
        }

        cout<<g<<endl;
    }
}