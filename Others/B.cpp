#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,c,m=0,x=0;
        cin>> a>>b>>c;
            if(abs(b-a)%c==0)
                cout<< abs(b-a)/c<<endl;
            else
                cout<< "-1"<<endl;

    }

    return 0;
}
