#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,a,b;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        if(b>a){
            cout<<b-a<<endl;
        }else{
            if(a%b==0){
                cout<<"0"<<endl;
            }else{
                ll rem = a%b;
                cout<<b-rem<<endl;
            }
        }
    }
}
