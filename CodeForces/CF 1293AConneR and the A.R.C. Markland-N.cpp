#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,n,s,k;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>s>>k;
        vector<ll>arr;

        arr.resize(k);
        for(int i=0; i<k; i++)
        {
            ll t;
            cin>>t;
            arr.push_back(t);
        }
        for(ll i=0; i<=k; i++)
        {
            if(s-i>=1 && find(arr.begin(),arr.end(),s-i)==arr.end())
            {
                cout<<i<<endl;
                arr.clear();
                break;
            }
            if(s+i<=n && find(arr.begin(),arr.end(),s+i)==arr.end())
            {
                cout<<i<<endl;
                arr.clear();
                break;
            }
        }

    }
}
