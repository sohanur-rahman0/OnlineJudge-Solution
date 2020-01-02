#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,tc;
    char c;
    cin>>tc;
    while(tc--){
        cin>>a>>c>>b;
         if(a==b)
            cout<<a*b<<endl;
        else if(isupper(c))
            cout<<b-a<<endl;
        else
            cout<<a+b<<endl;

    }
    return 0;
}
