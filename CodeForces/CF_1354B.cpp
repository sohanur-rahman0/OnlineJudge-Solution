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


const int MAX_CHARS = 200000; 


string SubString(string str) 
{ 
	int n = str.length(); 

	int dist_count = 0; 
	bool visited[MAX_CHARS] = { false }; 
	for (int i = 0; i < n; i++) { 
		if (visited[str[i]] == false) { 
			visited[str[i]] = true; 
			dist_count++; 
		} 
	} 

	 
	int start = 0, start_index = -1, min_len = INT_MAX; 

	int count = 0; 
	int curr_count[MAX_CHARS] = { 0 }; 
	for (int j = 0; j < n; j++) { 
		
		curr_count[str[j]]++; 
 
		if (curr_count[str[j]] == 1) 
			count++; 

		if (count == dist_count) { 
			
			while (curr_count[str[start]] > 1) { 
				if (curr_count[str[start]] > 1) 
					curr_count[str[start]]--; 
				start++; 
			} 

			
			int len_window = j - start + 1; 
			if (min_len > len_window) { 
				min_len = len_window; 
				start_index = start; 
			} 
		} 
	} 

	
	return str.substr(start_index, min_len); 
} 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin>>tc;
    while(tc--){
    	string str;
    	cin>>str;
    	bool flag = false;
    	int arr[4] = {0};
    	for(int i = 0; str[i]; i++){
    		arr[int(str[i]-'0')]++;
    	}
    	for(int i=1; i<=3; i++){
    		if(arr[i]<=0)flag = true;
    	}

    	if(flag){
    		cout<<"0"<<endl;
    	}else{
    	string ans = SubString(str);
    	cout<<ans.length()<<endl;
    }
    }




}


