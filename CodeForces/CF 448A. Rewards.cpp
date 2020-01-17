#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cup[3],medal[3],n,sm=0,sc=0;
    for(auto i:cup){
        cin>>i;
        sc+=i;
    }
    for(auto i:medal){
        cin>>i;
        sm+=i;
    }
    cin>>n;

    int nc=0,nm=0;
    while(sc>0){
        sc-=5;
        nc++;

    }
    while(sm>0){
        sm-=10;
        nm++;

    }
    int need = nc+nm;
   // cout<<need<<endl;

    if(need<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
