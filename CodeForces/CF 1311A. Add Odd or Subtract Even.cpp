#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a%2==0 && b%2!=0)
        {
            if(a<b)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if(a%2!=0 && b%2!=0)
        {
            if(a>b)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if(a%2==0 && a%2==0)
        {
            if(a<b)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }

        else if(a%2!=0 && b%2==0)
        {
            if(a>b)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }


    }

}
