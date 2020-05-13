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

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin>>tc;
    cin.ignore();
    string a,b,x ="",y = "";
    for(int c=1; c<=tc; c++){
    	getline(cin,a);
    	getline(cin,b);
    	toLower(a);
    	toLower(b);
    	sort(all(a));
    	sort(all(b));
    	for(int i = 0; a[i]; i++){
    		if(a[i]==' ')continue;
    		x+=a[i];
    	}
    	for(int i = 0; b[i]; i++){
    		if(b[i]==' ')continue;
    		y+=b[i];
    	}
    	// cout<<x<<endl;
    	// cout<<y<<endl;

    	cout<<"Case "<<c<<": ";
    	
    	if(x==y){
    		cout<<"Yes"<<endl;
    	}else{
    		cout<<"No"<<endl;
    	}

    	x= "",y = "";
    }

}