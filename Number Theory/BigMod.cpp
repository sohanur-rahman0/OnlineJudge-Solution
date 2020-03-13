#include<bits/stdc++.h>
using namespace std;
int BigMod(string str,int mod)
{
    int rem = 0;
    for(int i=0; str[i]; i++)
    {
        int t = rem * 10 + (int)str[i]- '0';
        rem = t%mod;
    }
    return rem;
}
int main()
{
    while(true)
    {
        string input;
        cin>>input;
        int mod;
        cin>>mod;
        cout<<"Mod :"<< BigMod(input,mod)<<endl;
    }
}

