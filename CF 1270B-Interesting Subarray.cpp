#include<bits/stdc++.h>
using namespace std;
#define l long
int main()
{
    l tc,n;
    bool flag;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        l arr[n+1];
        flag = false;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i+1<=n; i++)
        {
            if(abs(arr[i+1]-arr[i])>1)
            {
                cout<<"YES"<<'\n'<<i<<' '<<i+1<<'\n';
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<'\n';
    }
}
