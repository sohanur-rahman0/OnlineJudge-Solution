#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    char s[4];

    while(n--)
    {
        cin>>s;
        if(strcmp(s,"++x")==0)
            c++;
        else if(strcmp(s,"x++")==0)
            c++;
        else if(strcmp(s,"--x")==0)
            c--;
        else if(strcmp(s,"x--")==0)
            c--;
    }
    cout<<c<<endl;
}
