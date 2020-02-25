#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,n,x;
    cin>>tc;
    while(tc--)
    {
        vector<ll>v;
        cin>>n>>x;
        for(int i=0; i<n; i++)
        {
            ll t;
            cin>>t;
            v.push_back(t);
        }
        ll m = *max_element(v.begin(),v.end());
        if(m==x)
        {
            cout<<"1"<<endl;
        }
        else if(m<x)
        {
            if(x%m==0)
            {
                cout<<x/m<<endl;
            }
            else
            {
                cout<<(x/m)+1<<endl;
            }
        }
        else if(m>x)
        {
            cout<<"2"<<endl;
        }
    }

}
