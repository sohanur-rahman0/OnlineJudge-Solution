#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int test;

    string s;
    cin>>test;
    cin.ignore();
    while(test--){
        getline(cin,s);
        stack<char>st;
        for(int i=0; s[i]; i++)
        {
           if(!st.empty() && s[i]==')' && st.top()=='(')
            st.pop();
           else if(!st.empty() && s[i]==']' && st.top()=='[')
            st.pop();
           else
            st.push(s[i]);
        }

        if(st.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
