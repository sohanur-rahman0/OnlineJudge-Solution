#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y;
    string str;
    cin>>n>>x>>y>>str;
    long count = 0;
    for(int i = n-x; i<n; i++)
    {
        if(n-y-1 == i)
        {
            continue;
        }
        else if(str[i]=='1')
        {
            count++;
        }
    }
    if(str[n-y-1]=='0')
        count++;
    cout<<count<<endl;
}
