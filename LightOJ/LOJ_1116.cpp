#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc,w;
    cin>>tc;
    
    for(int i=1; i<=tc; i++){
    	cin>>w;
    	bool flag = false;
    	if(w%2==1){
    		cout<<"Case "<<i<<": Impossible"<<endl;
    		continue;
    	}

    	ll len = w/2;

    	for(ll j = 2; j<=len; j+=2){
    		if(j%2==0 && ((w/j)%2==1) && ((w/j)*j==w)){
    			cout<<"Case "<<i<<": "<<w/j<<" "<<j<<endl;
    			flag = true;
    			break;
    		}

    		
    	}


    	if(!flag){
    		cout<<"Case "<<i<<": "<<"1"<<" "<<w<<endl;    	}
    }


}