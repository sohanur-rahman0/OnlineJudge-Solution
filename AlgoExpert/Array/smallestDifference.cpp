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

int smallestDifference(vector<int>&arr, vector<int>&arr2) {
    int minDifference = INT_MAX;
    int currDifference = INT_MAX;
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());
    int i=0,j=0, first, second;
    while(i < arr.size() && j < arr2.size()) {
        first = arr[i];
        second = arr2[j];

        if(first < second) {
            currDifference = second - first;
            i++;
        } else if (first > second) {
            currDifference = first - second;
            j++;
        } else {
            return 0;
        }

        if (currDifference < minDifference) minDifference = currDifference;
    }

    return minDifference;


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vi arr,arr2;

    int n,m,t;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        cin>>t;
        arr.pb(t);
    }

    for(int i=0; i<m; i++) {
        cin>>t;
        arr2.pb(t);
    }

    cout<<smallestDifference(arr,arr2)<<endl;


}