#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,x,y,tc;
    cin>>tc;
    while(tc--){
        cin>>x>>y;
        c = y-1;
        a = x-c;
        b = 1;
        cout<<max(a,c)<<" "<<b<<" "<<min(a,c)<<endl;

    }
    return 0;

}
