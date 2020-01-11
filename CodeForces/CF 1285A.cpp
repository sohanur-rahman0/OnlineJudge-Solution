#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,l=0,r=0;
    cin>>n>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='L')l++;
        if(str[i]=='R')r++;
    }
    cout<<l+r+1<<endl;
}
