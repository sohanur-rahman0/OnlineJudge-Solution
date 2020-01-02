#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string input;
    stack<char> st;
    while(cin>>input){
        for(int i=0; input[i]; i++){
            if(input[i]=='(')
                st.push(input[i]);

                if(input[i]==')')
                {
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        st.push(input[i]);
                    }
                }


        }
                if(st.empty())
                    cout<<"correct"<<endl;
                else
                    cout<<"incorrect"<<endl;

                while(!st.empty())
                    st.pop();
    }
}
