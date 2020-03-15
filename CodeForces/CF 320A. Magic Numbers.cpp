#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    bool flag = true;
    for(int i=0; arr[i]; i++)
    {
        if(arr[i]!='1' && arr[i]!='4')
        {
            flag = false;
            break;
        }
        if(arr[0]=='4')
        {
            flag = false;
            break;
        }

    }
    if(arr.find("444")!=arr.npos)
        flag = false;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
