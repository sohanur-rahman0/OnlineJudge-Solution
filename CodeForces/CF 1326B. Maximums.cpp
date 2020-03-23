#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0; i<n; i++)cin>>a[i];
    ll t = 0;
    for(ll i=0; i<n; i++)
    {
        a[i] += t;
        t = max(t,a[i]);
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
