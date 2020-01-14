#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long tc,a,b;

    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;

        if (b>=999999999)
            cout<<a*9<<endl;
        else if (b>=99999999)
            cout<<a*8<<endl;
        else if (b>=9999999)
            cout<<a*7<<endl;
        else if (b>=999999)
            cout<<a*6<<endl;
        else if (b>=99999)
            cout<<a*5<<endl;
        else if (b>=9999)
            cout<<a*4<<endl;
        else if (b>=999)
            cout<<a*3<<endl;
        else if (b>=99)
            cout<<a*2<<endl;
        else if (b>=9)
            cout<<a*1<<endl;
        else
            cout<<"0"<<endl;


    }
}
