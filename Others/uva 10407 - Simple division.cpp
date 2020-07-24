#include<bits/stdc++.h>///did not solve yet
using namespace std;
#define ll long long
int main()
{
    while(true)
    {
        ll a[2000];
        ll n=1;
        cin>>a[0];
        if(a[0]==0)break;
        else
        for(int i=1;;i++)
        {
            cin>>a[i];
            n++;
            if (a[i]==0)break;

        }
        ll ans = 0;

        for(int i=1; i<n; i++)
        {
            ll dif = a[i] -a[i-1];
             ans = __gcd( ans, dif);
        }


        cout<<ans<<endl;

    }
}
