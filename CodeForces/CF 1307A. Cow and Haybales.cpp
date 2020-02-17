#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,day = 0,tc,add=0;
    cin>>tc;
    while(tc--)
    {
        add = 0;
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=1; i<n; i++)
        {
            int t;
            day = 0;
            if(arr[i]>0)
            {
                while(arr[i]>0 && d>0)
                {
                    d-=i;
                    arr[i]--;
                    add++;
                    if(d<0)
                        add--;

                }
            }
        }
        cout<<add+arr[0]<<endl;
    }
}
