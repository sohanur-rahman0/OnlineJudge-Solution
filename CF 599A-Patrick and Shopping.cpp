#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,o,ans;
    cin>>m>>n>>o;
    ans = min(min(2*m + 2*n , m+n+o),min(2*m+2*o,2*n+2*o));
    cout<<ans<<endl;


}
