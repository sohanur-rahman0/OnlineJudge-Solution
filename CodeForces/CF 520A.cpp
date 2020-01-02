#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int az[26] = {0};
    memset(az,0,sizeof(az));
    cin>>n;
    //int arr[n];
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i=0; s[i]; i++)
    {
        az[s[i]-'a']=1;
    }
    bool p = false;
    for(int i=0; i<26; i++)
    {
        if(az[i]>0)
        {
            p = true;
        }
        else{
            p = false;
            break;
        }
    }

    if(p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
