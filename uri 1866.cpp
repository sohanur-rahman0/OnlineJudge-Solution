#include<iostream>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
