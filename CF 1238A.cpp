#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long tc,x,y;
   cin>>tc;
   while(tc--){
    cin>>x>>y;
    if(x-y==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
   }
   return 0;
}
