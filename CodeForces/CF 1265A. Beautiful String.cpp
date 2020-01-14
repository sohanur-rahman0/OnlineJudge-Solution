#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    bool flag=false;
    int tc;
    cin>>tc;
    while(tc--){
        cin>>str;
        for(int i=0; str[i]; i++)
        {
            if(str[i]!='?' && str[i]==str[i+1]){
                flag = true;
                break;
            }
            else if(str[i]=='?'){
                if(str[i-1]!='a' && str[i+1]!='a')
                    str[i] = 'a';
                else if(str[i-1]!='b' && str[i+1]!='b')
                    str[i] = 'b';
                else if(str[i-1]!='c' && str[i+1]!='c')
                    str[i] = 'c';

            }

            }
            if(flag){
                cout<<"-1"<<'\n';
                flag = false;
            }
            else
                cout<<str<<'\n';

        }

    }


