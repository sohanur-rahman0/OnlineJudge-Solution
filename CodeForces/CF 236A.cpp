#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c=1;
    cin>>str;
    int l = str.length();

   sort(str.begin(),str.end());
    for(int i=0; i<l-1; i++)
    {
        if(str[i]!=str[i+1])
            c++;
    }

    if(c%2==1)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;

    return 0;
}
