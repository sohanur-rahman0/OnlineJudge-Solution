#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool sieve(ll t)
{
    ll n = sqrt(t);
    if(n>1)
    {
        for(ll i=2; i*i<=n; i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,tem,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        tem = sqrt(num);
        if(tem * tem == num && sieve(num))
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }

    }
}
