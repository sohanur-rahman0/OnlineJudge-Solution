#include<bits/stdc++.h>//did not solve yet
using namespace std;
#define ll long long
//ll fun(ll a, ll b){
//    ll ans = (a|b)-b;
//    return ans;
//}
int main()
{
    ll n;
    vector<ll>s;
    cin>>n;
    ll l = n;
    while(n--){
        ll t;
        cin>>t;
        s.push_back(t);
    }
    sort(s.begin(),s.end(),greater<ll>());
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]){
            swap(s[i+1],s[l-1]);
        }
//        if(fun(s[i],s[i+1])==s[i+2]){
//            swap(s[i+2],s[i+3]);
//        }
    }
    for(ll i=0; i<l; i++)cout<<s[i]<<" ";
//    while(true){
//            ll x,y;
//        cin>>x>>y;
//        cout<<fun(x,y)<<endl;
//    }

}
