#include<bits/stdc++.h>
using namespace std;
int pre(char c)
{
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return 0;
}


int main()
{

    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string str;
        cin>>str;
        stack<char>st;
        string ans = "";
        for(int i=0; str[i]; i++)
        {
            if( str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
            {
                while( !st.empty() && pre(st.top()) >= pre(str[i]) )
                {
                    ans+= st.top();
                    st.pop();
                }
                st.push(str[i]);
            }
            else if(str[i]=='(')
            {
                st.push(str[i]);
            }
            else if(str[i]==')')
            {
                while(st.top()!='(')
                {
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                ans+=str[i];
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        cout<<ans<<endl;
        ans.clear();

    }
}
