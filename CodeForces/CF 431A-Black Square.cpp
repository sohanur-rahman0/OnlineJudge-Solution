#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ans=0;
    int arr[5];
    string str;
    cin>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    cin>>str;

    for(int i=0; str[i] ;i++)
    {
        if((int)str[i]-'0'==1)
            ans+=arr[1];
        else if((int)str[i]-'0'==2)
            ans+=arr[2];
        else if((int)str[i]-'0'==3)
            ans+=arr[3];
        else if((int)str[i]-'0'==4)
            ans+=arr[4];
    }
    cout<<ans<<endl;

}
