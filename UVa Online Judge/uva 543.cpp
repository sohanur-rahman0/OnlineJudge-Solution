#include<bits/stdc++.h>
#define ll long long
ll arr[10000001]= {0};
using namespace std;
void sieve()
{
    for(ll  i=2; i<=1000000; i++)
    {
        for (ll j=i*i; j<=1000000; j+=i)
        {
            arr[j-1]=1;

        }
    }
}
int main()
{
    sieve();
    arr[1] = 1;
    ll n;
    while(cin>>n,n)
    {
        ll a,b;
        bool flag = false;


        for(ll i=3; i<n; i++)
        {
            if(arr[i-1]==0)
            {
                a = i;
                b = n-a;
                if(arr[i-1]==0 && arr[b-1]==0)
                {
                    cout<<n<<" = "<<a<<" + "<<b<<endl;
                    flag=true;
                    break;
                }
            }

        }
        if(!flag)
            cout<<"Goldbach's conjecture is wrong."<<endl;

    }
}
