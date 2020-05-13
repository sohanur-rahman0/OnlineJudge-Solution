#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc,n,ca=1;
    cin>>tc;
    while(tc--){
    	cin>>n;
    	int sum = 0,k;
    	
    	cout<<"Case "<<ca++<<":"<<endl;
    	for(int c=1; c<=n; c++){
    		string str;
    		cin>>str;
    	
    		if(str=="donate"){
    			cin>>k;
    			sum+=k;
    		}else{
    			cout<<sum<<endl;
    		}
    	}
    }




}