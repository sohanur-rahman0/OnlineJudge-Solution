#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,c=0;
    cin>>n;
    const ll max = n*n;
    for(ll i=1; i<n; i++)
    {
        for(ll j=i; j<n; j++)
        {
            ll sum = i*i + j*j;
            if(sum>max)
                break;
            ll t = sqrt(sum);
            if(t*t == sum)
                c++;
        }

    }
    cout<<c<<endl;

}
