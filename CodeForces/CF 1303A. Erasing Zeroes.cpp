#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        int l=str.size();
        int x=0,z=0,c=0,k=1;
        for(int i=l-1; i>=0; i--)
        {
            if(str[i]=='1')
            {
                x=i;
                k=0;
                break;
            }
        }
        for(int i=0; i<l; i++)
        {
            if(str[i]=='1')
            {
                z=i;
                k=0;
                break;
            }
        }
        if(k==0)
        {
            for(int i=z; i<=x; i++)
            {
                if(str[i]!='1')
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
