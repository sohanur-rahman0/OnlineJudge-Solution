#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,c=0,m;
    string str;
    cin>>tc;
    while(tc--)
    {
        c=0;
        cin>>n>>str;
        m = 0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='A'){
                    c=0;
                  for(int j=i+1; j<n; j++){
                    if(str[j]=='P')c++;
                    if(str[j]=='A')break;
                  }
                  m = max(m,c);
                  c=0;

            }
        }
        cout<<m<<endl;
        c = 0;
        m = 0;
    }
}


