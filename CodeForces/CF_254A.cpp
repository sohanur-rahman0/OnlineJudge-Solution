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
#define toUpper(str) transform(str.begin(),str.end(),::toupper);
#define toLower(str) transform(str.begin(),str.end(),::tolower);


template < class T > T MAX( T a, T b ) { return ( a > b ? a : b );}
template < class T > T MIN( T a, T b ) { return ( a < b ? a : b );}
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


    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<vi> adj(5001);
    int n,x;
    cin>>n;
    for(int i=1; i<=2*n; i++){
    	cin>>x;
    	adj[x].pb(i);
    }
    bool flag = false;
    for(int i=1; i<=5000; i++){
    	int tem = adj[i].size();
    	if(tem%2==1){
    		flag = true;
    		break;
    	}
    }
    if(flag){
    	cout<<"-1"<<endl;
    }else{
    	int c;
    	for(int i=1; i<=5000; i++){
    		c = 0;
    		for(auto itr:adj[i]){
    			c++;
    			cout<<itr<<' ';
    			if(c==2){
    				cout<<endl;
    				c = 0;
    				}	
    			}
    		}
    		
    	}
    }

