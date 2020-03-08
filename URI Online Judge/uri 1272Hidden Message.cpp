#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    getchar();
    while(tc--)
    {
        string str;
        getline(cin,str);
        if(str[0]>96 && str[0]<123)
            cout<<str[0];
        for(int i=1; str[i]; i++)
        {
            if(str[i]>96 && str[i]<123)
            {
                if((str[i-1]<96)||(str[i-1]>123))
                    cout<<str[i];
            }
        }
        cout<<endl;
    }
}
