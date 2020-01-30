#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
int main()
{
    ll x,y,n,ans;
    cin>>x>>y>>n;
    ll f[7] = {0,x,y,y-x,-x,-y,x-y};
    if(n<=6){
         ans = (f[n]%mod+mod)%mod;
    }else{
        ll p = n%6;

        if(p==0){
            ans = (f[6]%mod+mod)%mod;
        }else{
            ans = (f[p]%mod+mod)%mod;
        }
    }

    cout<<ans<<endl;
}
