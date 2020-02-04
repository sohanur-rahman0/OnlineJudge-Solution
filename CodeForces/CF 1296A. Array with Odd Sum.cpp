#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        int odd = 0;
        int even = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(sum%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(n%2==0 && odd==n)
            {
                cout<<"NO"<<endl;
            }
            else if(odd==0)
            {
                cout<<"NO"<<endl;
            }
            else if(odd%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if(even>0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }


    }
}
