#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int s[n];
    int c[5] = {0};
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        c[s[i]]++;
    }
    int ans = c[4] + c[3] + c[2]/2;
    c[1] -= c[3];

    if(c[2]%2)
    {
        ans++;
        c[1]-=2;
    }
    if(c[1]>0)
    {
        ans += (c[1]+3)/4;
    }
    cout<<ans<<endl;


    return 0;
}
