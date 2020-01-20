#include<bits/stdc++.h>///did not solve yet
using namespace std;
#define ll long long
int main()
{


    ll tc,n,s,k;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>s>>k;
        ll arr[1001] = {0};
        ll t;

        for(int i=0; i<k; i++){
            cin>>t;
            arr[t] = 1;
        }
        ll up=0,d=0;
        if(s>=1000){
            up = s-1000;
        }

        for(int i=s; i<=1001; i++)
        {

            if(arr[i]==0)
            {

                break;
            }
            up++;

        }
        for(int i=s; i>=0; i++)
        {

            if(arr[i]==0)
            {

                break;
            }
            d++;

        }
        ll ans = min(up,d);
        cout<<ans<<endl;
    }
}
