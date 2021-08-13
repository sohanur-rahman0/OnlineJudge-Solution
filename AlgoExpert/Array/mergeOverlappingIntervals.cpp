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


vector<pii> mergeOverlappingIntervals(vector<pii> &arr) {
    sort(arr.begin(), arr.end());

    vector<pii> ans;
    ans.pb(mp(arr[0].first, arr[0].second));
    int itr = 0;
    for(int i=1; i<arr.size(); i++) {
        if(ans[itr].second < arr[i].first) {
            ans.pb(mp(arr[i].first, arr[i].second));
            itr++;
        } else {
            ans[itr].second = max(ans[itr].second,arr[i].second);
        }
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
    vector<pii> arr;
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a>>b;
        arr.pb(mp(a,b));
    }

    vector<pii> ans = mergeOverlappingIntervals(arr);

    // for(auto itr:ans) {
    //     cout<<itr.first<<" "<<itr.second<<endl;
    // }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i].first<< " "<<ans[i].second<<endl;
    }
}