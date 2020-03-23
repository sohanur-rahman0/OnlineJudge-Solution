#include<bits/stdc++.h>
using namespace std;
#define ll long long
///using pascals triangle
ll nCr(ll n,ll r)
{
    if(r==0 || n==r)
        return 1;
    else
        return nCr(n-1,r)+nCr(n-1,r-1);
}
int main()
{
    cout<<nCr(1000,5)<<endl;

}
