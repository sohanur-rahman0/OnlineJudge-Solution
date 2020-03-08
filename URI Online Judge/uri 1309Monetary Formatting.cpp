#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll d,c;
    while(cin>>d>>c)
    {
        string str,ans;
        str = to_string(d);
        reverse(str.begin(),str.end());
        ll len = str.size();

        for(int i=0; i<len; i++)
        {

            if(i && i%3==0)
            {

                ans.push_back(',');
            }

            ans.push_back(str[i]);

        }
        reverse(ans.begin(),ans.end());
        ans +='.';
        if(c<10)
        {

            ans += "0";
            ans += to_string(c);
        }
        else
        {
            ans += to_string(c);
        }
        cout<<"$"<<ans<<endl;

    }
}
