#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,a,b,c;
    cin>>n;
    while(n--)
    {

        cin>>a>>b>>c;
        if(a==b && a!=c)
           cout<<"YES"<<endl;
           else if(b==c && a!=b)
           cout<<"YES"<<endl;
           else if(a==c && a!=b)
            cout<<"YES"<<endl;
           else
            cout<<"No"<<endl;



    }
    return 0;
}
