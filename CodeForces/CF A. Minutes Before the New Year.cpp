#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc,h,m;
    cin>>tc;
    while(tc--)
    {
        cin>>h>>m;
        cout<<1440-((h*60) + m)<<'\n';
    }
}
