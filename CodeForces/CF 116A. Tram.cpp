#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,p=0,m=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        p-=a;
        p+=b;
        m = max(m,p);
    }
    cout<<m<<endl;
}
