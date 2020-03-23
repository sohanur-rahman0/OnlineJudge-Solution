#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n==1){
            cout<<"-1"<<endl;
            continue;
        }
        string str="";
        str+='2';
        for(int i=1; i<n; i++)
        {
            str+= '3';
        }


        cout<<str<<endl;
        str.clear();
    }
}
