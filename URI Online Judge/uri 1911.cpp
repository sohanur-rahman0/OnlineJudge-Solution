#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>data;
    int n;
    while(cin>>n,n)
    {
        while(n--)
        {
            string name,signature;
            cin>>name>>signature;
            data[name] = signature;
        }
        int q,ans=0;
        cin>>q;
        while(q--)
        {
            string name,signature;
            cin>>name>>signature;
            string temp = data[name];
            int c=0;
            for(int i=0; i<temp.size(); i++)
            {
                if(temp[i]!=signature[i])
                    c++;
            }
            if(c>1)
                ans++;


        }
        cout<<ans<<endl;

    }
}
