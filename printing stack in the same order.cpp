#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st)
{
    if(st.empty())
        return ;

    int a = st.top();

    st.pop();

    print(st);

    cout<<a<<endl;

    st.push(a);
}
int main()
{
    stack<int> n;
    int num;
    for(int i=0; i<5; i++){
        cin>>num;
        n.push(num);
    }
    print(n);
    return 0;

}
