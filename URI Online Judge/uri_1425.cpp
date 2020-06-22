#include<bits/stdc++.h>
using namespace std;
///did not solve yet

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

    long n,m;

    while(cin>>n>>m && n!=0 && m!=0){
    	long arr[n+2] = {0};
    	arr[m] = 1;
    	bool flag = false;
    	long value = 0,rangeL,rangeR,current = 1;

    	if(arr[current]==1){
    		cout<<"Let me try!"<<endl;
    		continue;
    	}


    	for (int i = 2; ; ++i)
    	{
    		value = ( i * 2 ) - 1;
    		rangeL = current - value;
    		rangeR = current + value;
    		if(rangeL <= 0){
    			current+= rangeR;
    			if(current>n)break;
    		}else{
    			current-= rangeL;
    			if(current<=0)break;
    		}

    		if(arr[current]==1){
    			flag = true;
    			break;
    		}

    		if(value> n){
    			break;
    		}


    	}
    	if(flag){
    		cout<<"Let me try!"<<endl;
    	}else{
    		cout<<"Don't make fun of me!"<<endl;
    	}

    }



}