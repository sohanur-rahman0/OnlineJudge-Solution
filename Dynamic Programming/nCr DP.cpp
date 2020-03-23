#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr [10000][10000]= {0};
ll ncr(ll n,ll r)
{

    ll result;
    if(arr[n][r]!=0)
        return arr[n][r];
    if(n==r||r==0)
        result = 1;
    else
        result = ncr((n-1),(r-1))+ncr(n-1,r);
    arr[n][r]=result;
    return result;

}
int main()
{
    cout<<ncr(1000,5)<<endl;
}
