#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t= n;
    string str,s;
    cin>>str;
    int c=1,cc=0;
    if(t==1)
        cout<<str<<endl;
    else{
    n-=1;
    while(n--){
        string temp;
        cin>>temp;
        if(str==temp)c++;
        else{
            cc++;
            s = temp;
        }
    }
    if(c>cc)
        cout<<str<<endl;
    else
        cout<<s<<endl;
    }

}
