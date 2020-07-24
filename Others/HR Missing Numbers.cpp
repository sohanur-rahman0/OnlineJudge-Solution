#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<ll,ll>f,s;

    ll n,m,t;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
    	cin>>t;
    	f[t]++;
    }

    cin>>m;

    for (int i = 0; i < m; ++i)
    {
    	cin>>t;
    	s[t]++;
    }

    map<ll, ll>::iterator it;
    map<ll, ll>::iterator itr;




    for(it = f.begin(), itr = s.begin();it!=f.end() , itr!=s.end(); it++, itr++){
    	

    	if(itr->second > it->second){
    		cout<<itr->first<<" ";
    	}


    }

    cout<<endl;

}