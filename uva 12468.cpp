#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a,b,ans;
    while(cin>>a>>b && a!=-1 && b!=-1)
    {
        if(a>b)
            ans = a - b;
        else
            ans = b - a;

        if(ans>=50)
            ans = 100 - ans;
        cout<<ans<<endl;

    }
    return 0;
}
