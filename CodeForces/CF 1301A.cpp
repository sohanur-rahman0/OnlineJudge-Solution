#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    string aa,bb,cc;
    while(t--)
    {

        cin>>aa>>bb>>cc;
        ll l = aa.size();
        for(int i=0; i<l; i++)
        {
            if(aa[i]==cc[i])
            {
                if(bb[i]!=cc[i])
                {
                    swap(bb[i],cc[i]);
                }
            }
            else if(bb[i]==cc[i])
            {
                if(aa[i]!=cc[i])
                {
                    swap(aa[i],cc[i]);
                }
            }
            else
            {
                swap(aa[i],cc[i]);
            }

        }

        if(aa!=bb)
        {
            cout<<"NO"<<endl;
            aa.clear();
            bb.clear();
            cc.clear();
        }
        else
        {
            cout<<"YES"<<endl;
            aa.clear();
            bb.clear();
            cc.clear();
        }
    }
}
