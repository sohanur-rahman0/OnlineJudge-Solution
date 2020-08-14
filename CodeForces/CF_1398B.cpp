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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;
    while(tc--){
    	string str;
    	cin>>str;
    	vector<int> v;
    	int c = 0;
    	
    	for(int i=0; i<str.size(); i++)
    	{
    		if(str[i]=='1'){
    			c =0;
    			while(str[i]=='1'){
    				i++;
    				c++;
    			}
    			v.pb(c);
    			c = 0;
    			
    		}
    	}
    	sort(v.begin(),v.end(),greater<int>());

    	int ans = 0;

    	int len = v.size();
    	
    	for(int i=0; i<len; i+=2){
    		ans += v[i];
    	}
    	cout<<ans<<endl;


    }

}