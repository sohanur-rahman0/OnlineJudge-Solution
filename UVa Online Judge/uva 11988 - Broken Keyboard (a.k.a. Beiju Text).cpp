#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        list<char>line;
        auto itr = line.begin();
        for(int i=0; str[i]; i++)
        {
            if(str[i]=='[')
            {
                itr = line.begin();
            }
            else if(str[i]==']')
            {
                itr = line.end();
            }
            else
            {
                line.insert(itr,str[i]);
            }
        }
        for(auto i:line)
            cout<<i;
        cout<<endl;
        str.clear();
        line.clear();
    }
}
