#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>bracket;
    int n,l,cnt=0;
    cin>>n;
    string str;
    while(n--)
    {
        cnt=0;
        cin>>str;
        l = str.length();
        for(int i=0; i<l; i++)
        {
            bracket.push(str[i]);
        }

        for(int i=0; i<l/2; i++)
        {
            if(str[i]=='{')
            {
                if(bracket.top()=='}')
                {
                    cnt++;
                    bracket.pop();
                }
            }
            else if(str[i]=='(')
            {
                if(bracket.top()==')')
                {
                    cnt++;
                    bracket.pop();
                }
            }
            else if(str[i]=='[')
            {
                if(bracket.top()==']')
                {
                    cnt++;
                    bracket.pop();
                }
            }
        }
        cout<<l<<endl;
        cout<<cnt<<endl;
        if(cnt==l/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }



}
