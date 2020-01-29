#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str){
        if(str[0]=='0')break;
        int len = str.size();
        long long ans=0;
        for(int i=0; str[i]; i++){
            int p = pow(2,len)-1;
            ans+=((int)str[i]-'0') * p;
            len--;
        }
        cout<<ans<<endl;
    }
}
