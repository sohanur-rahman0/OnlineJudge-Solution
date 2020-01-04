#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,q,y,p,pp;
    cin>>n>>m;
    string s[n+1];
    string ss[m+1];
    string ans="";
    for(int i=1; i<=n; i++)
        cin>>s[i];
    for(int i=1; i<=m; i++)
        cin>>ss[i];

    cin>>q;
    while(q--)
    {
        cin>>y;
        p = 0;
        pp = 0;
        if(y<=n)
        {
            p = y;
        }
        else
        {
            p = y%n;
            if(y%n==0)
                p=n;
        }
        if(y<=m)
        {
            pp = y;
        }
        else
        {
            pp = (y%m);
            if(y%m==0)
                pp = m;

        }
        ans = s[p] + ss[pp];
        cout<<ans<<'\n';


    }

}
