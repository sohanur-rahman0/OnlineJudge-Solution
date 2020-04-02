#include<bits/stdc++.h>///did not solve yet
using namespace std;
#define ll long long
int main()
{
    ll tc,a,b,c,d;
    cin>>tc;
    while(tc--){
        cin>>a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        ll len = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        //cout<<a+b+c+d<<" "<<len<<endl;
        ll len2 = sqrt(a+b+c+d);
        if(len2<=len){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
