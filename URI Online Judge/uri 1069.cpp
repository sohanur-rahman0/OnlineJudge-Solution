#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int tc,c;
    string str;
    cin>>tc;
    while(tc--){
            c = 0;
        cin>>str;
        stack<char>st;
        for(int i=0; str[i]; i++)
        {
            if(!st.empty() && str[i]=='>' && st.top()=='<')
            {
                st.pop();
                c++;
            }else if(str[i]=='<' || str[i]=='>'){
                st.push(str[i]);
            }
        }
        cout<<c<<endl;
    }
}
