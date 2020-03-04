#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n,m,s=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        s = 0;
        int arr[n];

        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
            if(i==0)continue;

            s+=arr[i];
        }

        while(arr[0]<m && s>0)
        {
            arr[0]++;
            s--;
        }
        cout<<arr[0]<<endl;
    }
}
