#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc,n,k,ans;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        ans = n - n%k;
        ans += min(n%k,(k/2));
        cout<<ans<<'\n';
    }
}
