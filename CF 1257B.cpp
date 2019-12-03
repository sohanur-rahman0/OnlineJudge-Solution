#include<iostream>
using namespace std;
int main()
{
    long tc,x,y;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        if(x>3)
            cout<<"YES"<<endl;
        else if(x==1)
        {
            if(y==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(y<=3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
