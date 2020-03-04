#include<bits/stdc++.h>///did not solve
using namespace std;
int main()
{
    string str;
    string s="";
    cin>>str;
    int c=0;
    int l = str.size();
    stack<char>st;
    int arr[l];
    int k=0;

    for(int i=0; str[i]; i++)
    {
        if(st.empty() &&str[i] == '(')
        {
            st.push('(');
            //arr[k] = i+1;
            //k++;
        }
        if(str[i]==')')
        {
            if(!st.empty()){
                st.pop();
                s+="()";
                //arr[k] = i+1;
                //k++;
            }
        }
    }
    if(s.empty())
    {
        cout<<0<<endl;
        return 0;
    }else{
        cout<<1<<endl;
        cout<<s.size()<<endl;
    }
    //sort(s.begin(),s.end());
    for(int i=0; s[i]; i++){
        for(int j=0; str[j]; j++){
            if(s[i]==str[j]){
                arr[k] = j+1;
                str[j] = '#';
                k++;
                break;
            }
        }
    }
    sort(arr,arr+k);
    for(int i=0; i<s.size(); i++)cout<<arr[i]<<" ";

    cout<<endl;


}
