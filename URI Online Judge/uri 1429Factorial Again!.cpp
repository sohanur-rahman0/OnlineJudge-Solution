#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    int res = 1;
    for(int i=1; i<=n; i++){
        res*=i;
    }
    return res;
}
int main()
{
    string str;
    while(true){
        cin>>str;
        if(str[0]=='0')break;

        int len = str.size();
        int ans=0;
        for(int i=len-1,j=1; i>=0; i--,j++){
            ans += (int)(str[i] - '0') * fac(j);
        }
        cout<<ans<<endl;
    }
}
