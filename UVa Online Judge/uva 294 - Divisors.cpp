#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll countDiv(ll n)
{
    ll count = 0;
    ll len = sqrt(n);
    for(int i=1; i<=len; i++)
    {
        if(n%i==0){
            if(n/i==i)
                count++;
            else
                count+=2;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc,l,u,m,mn,ma;
    cin>>tc;
    vector<ll>div,num;
    while(tc--)
    {
        m = 0;
        cin>>l>>u;
        for(ll i=l; i<=u; i++)
        {
            ma = countDiv(i);
            if(ma>m){
                m = ma;
                mn = i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<mn<<" has a maximum of "<<m<<" divisors."<<'\n';
    }
}
