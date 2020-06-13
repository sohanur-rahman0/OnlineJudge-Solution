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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin>>tc;
    int x,n,m;
    while(tc--){
    	cin>>n>>x;
    	int odd = 0,s = 0;
    	for(int i=0; i<n; i++){
    		cin>>m;
    		if(m%2==1)odd++;
    		s+= m;
    	}
    	int even = n - odd;

    	if(x==n){
    		if(s%2==0){
    			cout<<"No"<<endl;
    		}else{
    			cout<<"Yes"<<endl;
    		}
    	}else{
    		if(x%2==1){
    			if(odd){
    				cout<<"Yes"<<endl;
    			}else{
    				cout<<"No"<<endl;
    			}
    		}else{
    			if(even && odd){
    				cout<<"Yes"<<endl;
    			}else{
    				cout<<"No"<<endl;
    			}
    		}
    	}

    	
    }


}