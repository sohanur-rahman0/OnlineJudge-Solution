#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll ans = (sqrt(1+4*2*n)-1)/2;
        cout<<ans<<endl;
    }
}
