#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,ans,ans2,sum=0,sum2=0;
    cin>>n;
    ll arr[n]= {0},arr2[n]= {0},arr3[n]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>arr2[i];
        sum2+=arr2[i];
    }
    ans = abs(sum-sum2);
    sum = 0;
    for(int i=0; i<n-2; i++)
    {
        cin>>arr3[i];
        sum+=arr3[i];
    }
    cout<<ans<<'\n';
    cout<<abs(sum-sum2)<<'\n';

}
