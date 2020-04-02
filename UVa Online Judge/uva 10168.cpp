#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 10000002
ll isPrime(ll t)
{
    if(t<=1)
        return 0;

    for(ll i=2; i*i<=t; i++)
    {
        if(t%i==0)
            return 0;
    }
    return t;
}

int main()
{
    ll n;

    vector<ll>prime;

    ll check[m]= {0};
    for(ll i=2; i<m; i++)
    {
        for(ll j=i*i; j<m; j+=i)
        {
            check[j-i] = 1;
        }
    }
    for(ll i=3; i<m; i++)
    {
        if(check[i-1]==0)
            prime.push_back(i-1);
    }
    while(cin>>n)
    {
        if(n<8)
        {
            cout<<"Impossible."<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<"2 2 ";
            n-=4;
        }
        else
        {
            cout<<"2 3 ";
            n-=5;
        }
        if(n==4)
        {
            cout<<"2 2"<<endl;
            continue;
        }
        ll t = 0;
        for(ll i = 0; i<n ; i++)
        {
            t = n - prime[i];
            if(prime[i] + isPrime(t)==n)
            {
                cout<<prime[i]<<" "<<t<<endl;
                break;
            }
        }

    }

}
