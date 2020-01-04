#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>str;
        int size = str.size();
        if(str[size-1] == 'o' && str[size-2]=='p')
            cout<<"FILIPINO"<<'\n';
        else if(str[size-1] == 'u' && str[size-2]=='s')
            cout<<"JAPANESE"<<'\n';
        else
            cout<<"KOREAN"<<'\n';
    }
}
