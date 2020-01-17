#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    string str;
    cin>>str;
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}
