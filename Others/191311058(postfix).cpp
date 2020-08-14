#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    string str;
    cin>>str;


    for(int i=0; str[i]; i++){
        if(isdigit(str[i]))
            st.push((int)str[i]-'0');
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            switch(str[i])
            {
                case '+':
                     st.push(a+b);
                     break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;

            }
        }
    }
    cout<<st.top()<<endl;

}
