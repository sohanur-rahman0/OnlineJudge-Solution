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

int longestPeak(vi &arr) {
    int longestPeak = 0, i = 1;
    while(i < (arr.size() - 1)) {
        if(!((arr[i-1] < arr[i]) && (arr[i] > arr[i+1]))) {
            i++;
            continue;
        }

        int left = i-2, right = i + 2;

        while(left >= 0 && arr[left] < arr[left + 1]) {
            left--;
        }

        while(right < arr.size() && arr[right] < arr[right - 1]) {
            right++;
        }

        int currPeak = right - left - 1;

        longestPeak = max(longestPeak, currPeak);

        i = right;
    }

    return longestPeak;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,t;
    cin>>n;
    vi arr;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        arr.pb(t);
    }


    cout<<longestPeak(arr)<<endl;

}