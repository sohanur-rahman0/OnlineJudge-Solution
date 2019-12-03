#include<iostream>
using namespace std;
int main()
{
    int tc,n,x,a,b;
    cin>>tc;
    while(tc--){
        cin>>n>>x>>a>>b;
        cout<<min(n-1,abs(a-b)+x)<<endl;
    }
}
