#include<iostream>

using namespace std;

int main()
{
    long int tc,n,a,b,c,ans,i;
    cin>>tc;
    while(tc--){
        cin>>n;
        ans=0;
        for(i=0; i<n; i++){
            cin>>a>>b>>c;
            ans += a*c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
