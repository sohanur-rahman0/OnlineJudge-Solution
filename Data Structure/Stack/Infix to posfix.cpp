#include<bits/stdc++.h>
using namespace std;
int pre(char x)
{
    if(x=='+' || x == '-')return 1;
    else if(x=='*' || x=='/')return 2;
    //else if(x=='(' || x==')')return 3;
    else return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')return 0;
    else return 1;
}

char *inToPost(char *infix)
{
    int i=0,j=0;
    stack<char>st;
    //st.push('#');
     char *postfix;
     int len = strlen(infix);
     postfix = new char[len+2];
     while(infix[i]!='\0')
     {
         if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
         else{
            if(pre(infix[i])>pre(st.top()))
                st.push(infix[i++]);
            else{
                postfix[j++] = st.top();
                st.pop();
            }
         }
     }
     while(!st.empty()){
        postfix[j++] = st.top();
        st.pop();
     }
     postfix[j] = '\0';

     return postfix;

}

int main()
{
    char *infix = "A*2+c-d/2";
    char *postfix = inToPost(infix);

    cout<<postfix<<endl;



}
