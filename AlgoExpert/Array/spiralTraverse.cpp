#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define all(v) v.begin(),v.end()
#define rall(v) v.rend(),v.rend()
#define contains(a,b) (find(a.begin(),a.end(),b!=a.end()))
#define minimum(a) *min_element(a.begin(),a.end())
#define maximum(a) *max_element(a.begin(),a.end())
#define precision(n) cout<<fixed<<setprecision(n)
#define toUpper(str) transform(str.begin(),str.end(),::toupper);
#define toLower(str) transform(str.begin(),str.end(),::tolower);
template < class T > T MAX( T a, T b ) {
    return ( a > b ? a : b );
}
template < class T > T MIN( T a, T b ) {
    return ( a < b ? a : b );
}
template < class T > T gcd( T a, T b ) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
template < class T > T lcm( T a, T b ) {
    return (b / gcd(a, b)) * a;
}
template < class T > T toInt( T n) {
    int v;
    stringstream stream;
    stream << n;
    stream >> v;
    return v;
}
template < class T > T toStr( T str) {
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
vi spiralTraverse(vvi &arr) {
    vi ans;
    int sr = 0, er = arr.size() - 1;
    int sc = 0, ec = arr[0].size() - 1;

    while(sr <= er && sc <= ec) {
        for(int i=sc; i<=ec; i++) {
            ans.pb(arr[sr][i]);
        }

        for(int i=sr+1; i<= er; i++) {
            ans.pb(arr[i][ec]);
        }

        for(int i=ec-1; i>= sc; i--) {
            ans.pb(arr[er][i]);
        }

        for(int i=er-1; i>= sr + 1; i--) {
            ans.pb(arr[i][sr]);
        }

        sr++;
        er--;
        sc++;
        ec--;
    }

    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,m,t;
    cin>>n>>m;
    vvi arr(n, vi(m));
    for (int i = 0; i < n; i++) {
        for(int j=0; j<m; j++) {
            cin>>t;
            arr[i][j] = t;
        }
    }


    vi ans = spiralTraverse(arr);

    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
}