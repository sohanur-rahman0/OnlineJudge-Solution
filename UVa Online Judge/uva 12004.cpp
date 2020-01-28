#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tc,ans;
    cin>>tc;
    int i=1;
    while(tc--)
    {

        cin>>n;
        ans = ((n*(n-1)))/2;
        if(ans%2==0)
        {
            cout<<"Case "<<i++<<": "<<ans/2<<endl;
        }
        else
        {
            cout<<"Case "<<i++<<": "<<ans<<"/2"<<endl;
        }

    }
}

