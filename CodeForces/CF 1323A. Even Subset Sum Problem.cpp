#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odd =0,a,b;
        bool flag = false;
        bool f = false;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1 && arr[0]%2!=0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]%2==0)
                {
                    cout<<"1"<<endl;
                    cout<<i+1<<endl;
                    f = true;
                    break;
                }
                else
                {
                    odd++;
                    if(!flag)
                    {
                        a = i;
                        flag  = true;
                    }
                    else
                    {
                        b = i;
                    }
                }
            }

            if(!f)
            {
                cout<<"2"<<endl;
                cout<<a+1<<" "<<b+1<<endl;

            }
        }
    }
}
