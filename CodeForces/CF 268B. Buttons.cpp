#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,ans=0;
    cin>>n;
    ans+=n;
    for(int i=n-1; i>=1; i--)
        ans+=(n-i)*i;

    cout<<ans;
}
