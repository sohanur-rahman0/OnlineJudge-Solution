#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool check;
    cin>>s;
    int c,co;
    c = co = 0;

    for(int i=0; s[i]; i++)
    {
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0'){
            check = true;
            break;
        }else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
            check = true;
            break;
        }else{
            check = false;
        }

    }
    if(check)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
