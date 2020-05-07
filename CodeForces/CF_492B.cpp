#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	// freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);

    ll n,l;
    cin>>n>>l;
    ll pos[n];
    for(int i=0; i<n; i++){
    	cin>>pos[i];
    	
    }

   	sort(pos,pos+n);

   	ll maxd = 0;

   	for(int i=0; i<n-1; i++){
   		if(pos[i+1] - pos[i] > maxd){
   			maxd = pos[i+1] - pos[i]; 
   		}
   	}
   	double ans = (double)maxd/2.00;

   	// cout<<ans<<endl;

   	ll sd = pos[0] - 0;

   	if(sd>ans){
   		ans = (double)sd;
   	}

   	ll bd = l - pos[n-1];

   	if(bd>ans){
   		ans = (double)bd;
   	}

   	cout<<fixed<<setprecision(10)<<ans<<endl;



	return 0;
}