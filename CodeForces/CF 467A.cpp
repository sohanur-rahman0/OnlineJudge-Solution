#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,p,c,count=0;
    cin>>tc;
    while(tc--){
        cin>>p>>c;
        if(p+1<c)
            count++;
    }
    cout<<count<<endl;
}
