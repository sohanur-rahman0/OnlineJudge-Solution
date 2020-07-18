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
    int a,b,x;
    while(cin>>a>>b && a!=0 && b!=0){
    	int m=0,n=0;
    	int alice[100001] = {0},betty[100001]={0};
    	for(int i=0; i<a; i++){
    		cin>>x;
    		alice[x]++;
    	}
    	for (int i = 0; i < b; ++i)
    	{
    		cin>>x;
    		betty[x]++;
    	}
    	for(int i=0; i<100001; i++){
    		if(alice[i]!=0 && betty[i]==0){
    			m++;
    		}else if(alice[i]==0 && betty[i]!=0){
    			n++;
    		}
    	}

    	int ans =  (m>n)? n:m;

    	cout<<ans<<endl;
    }



}