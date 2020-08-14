#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define pi acos(-1.0)
#define all(v) v.begin(),v.end()
#define rall(v) v.rend(),v.rend()
#define contains(a,b) (find(a.begin(),a.end(),b!=a.end()))
#define minimum(a) *min_element(a.begin(),a.end())
#define maximum(a) *max_element(a.begin(),a.end())
#define precision(n) cout<<fixed<<setprecision(n)
#define toUpper(str) transform(str.begin(),str.end(),str.begin(),::toupper);
#define toLower(str) transform(str.begin(),str.end(),str.begin(),::tolower);


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<string, string> dic;
typedef pair<int, int> pii;
typedef stringstream ss;
typedef priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    multimap<ll,ll> mpp;
    ll arr[n], t;

    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i]>>t;
    	mpp.insert(mp(t,i));
    }

    ll currenttime = 0, ans = 0;

    for( auto it : mpp){
    	ll currentfinishtime = it.first;
    	ll currentactivity = it.second;

    	if(arr[currentactivity] > currenttime){
    		currenttime = currentfinishtime;
    		ans ++;
    	}
    }

    cout<<ans<<endl;





}