#include<bits/stdc++.h>
using namespace std;
int main()
{
    string heading,str;
    getline(cin,heading);
    getline(cin,str);
    map<char,int>Head;
    map<char,int>s;
    for(int i=0; heading[i]; i++)
    {
        if(heading[i]==' ')
            continue;
        Head[heading[i]]++;
    }
    for(int i=0; str[i]; i++)
    {
        if(str[i]==' ')
            continue;
        s[str[i]]++;
    }
    bool flag = true;
    auto i = s.begin();
    for(; i!=s.end(); i++)
    {
        char t = i->first;
        int v = i->second;
        auto itr = Head.find(t);
        if(itr==Head.end())
        {
            flag = false;
            break;
        }
        int comp = itr->second;
        if(v>comp)
        {
            flag = false;
            break;
        }

    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
