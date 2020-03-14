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
    string str;
    bool flag = true;
    while(cin>>str)
    {
        if(!flag)
        {
            cout<<endl;
        }
        bool leap,hulu,bulu;
        leap = hulu = bulu = false;
        if(BigMod(str,4)==0 && BigMod(str,100)!=0 || BigMod(str,400)==0)
        {
            leap = true;
        }
        if(BigMod(str,15)==0)
        {
            hulu = true;
        }
        if(BigMod(str,55)==0)
        {
            if(leap)
            {
                bulu = true;
            }
        }

        if(!leap && !hulu && !bulu)
            cout<<"This is an ordinary year."<<endl;
        if(leap)
        {
            cout<<"This is leap year."<<endl;
        }
        if(hulu)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        if(bulu)
        {
            cout<<"This is bulukulu festival year."<<endl;
        }
        flag = false;
    }

}
