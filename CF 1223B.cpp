#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int tc;
    cin>>tc;

    while(tc--)
    {
        int ss[26]= {0},tt[26] = {0};
        cin>>s>>t;
        for(int i=0; s[i]; i++){
            ss[s[i]-'a']++;
        }

        for(int i=0; t[i]; i++){
            tt[t[i]-'a']++;
        }

        bool is_true =false;
        for(int i=0; i<26; i++)
        {
            if(ss[i]>0 && tt[i]>0)
                is_true = true;

        }

        if(is_true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
