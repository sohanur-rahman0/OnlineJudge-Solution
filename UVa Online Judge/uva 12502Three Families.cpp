#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int x,y,z;
        cin>>x>>y>>z;
        int ans = (z*(x+x-y))/(x+y);
        cout<<ans<<endl;

    }
}
