#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    string first="",last="",middle="",t,f;
    for(int i=0; i<n; i++)
    {
        t = arr[i];
        reverse(t.begin(),t.end());
        if(arr[i]==t)
        {
            middle=arr[i];

        }
        else
        {
            for(int j=i+1; j<n; j++)
            {
                if(t==arr[j])
                {
                    first +=arr[i];
                    string s = arr[j];
                    reverse(s.begin(),s.end());
                    last += s;
                    break;
                }
            }
        }
    }
    reverse(last.begin(),last.end());
    string ans = first + middle + last;
    cout<<ans.size()<<endl<<ans<<endl;

}
