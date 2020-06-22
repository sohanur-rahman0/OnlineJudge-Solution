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


template < class T > T gcd( T a, T b ) { if (b == 0)return a; return gcd(b, a % b);}
template < class T > T lcm( T a, T b ) { return (b / gcd(a, b)) * a;}
template < class T > T toInt( T n) { int v; stringstream stream; stream << n; stream >> v; return v;}
template < class T > T toStr( T str) { stringstream stream; stream << str; return stream.str();}


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


///did not solve yet

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc,n,x;
    cin>>tc;
    while(tc--){
    	cin>>n>>x;
    	int arr[n];
    	int sum = 0;
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
    		sum+=arr[i];
    	}
    	bool flag = false;

    	if(sum%x != 0){
    		cout<<n<<endl;
    		continue;
    	}
        sort(arr,arr+n);

    	for (int i = 0; i < n; ++i)
    	{
    		sum -= arr[i];
    		if(sum % x != 0){
    			cout<<n-(i+1)<<endl;
    			flag = true;
    			break;
    		}
    	}
    	if(!flag){
    		cout<<"-1"<<endl;
    	}
    }

}