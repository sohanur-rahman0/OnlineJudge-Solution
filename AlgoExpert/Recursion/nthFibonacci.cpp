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

// int getNthFib(int n) {
//     if(n==2) {
//         return 1;
//     }

//     if(n==1) {
//         return 0;
//     }

//     return getNthFib(n-1) + getNthFib(n-2);
// }

// int getNthFib(int n) {
//     int mem[n]= {0};
//     int result;

//     if(mem[n]!=0)
//         return mem[n];
//     if(n==1 || n==2)
//         result = 1;
//     else
//         result = getNthFib(n-1)+getNthFib(n-2);
//     mem[n] = result;
//     return result;
// }

int getNthFib(int n) {
    int arr[2] = {0, 1};

    if(n==0)return arr[0];
    if(n==1)return arr[1];

    int next;

    for(int i=2; i<=n; i++) {
        next = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = next;
    }

    return arr[1];

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    cout<<getNthFib(n)<<endl;
}