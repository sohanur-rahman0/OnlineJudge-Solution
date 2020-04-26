#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m,n,m)
    {
        int c = 0;
        int arr[m];
        int temp[n+1]={0};
        for(int i=0; i<m; i++)
        {
            cin>>arr[i];
            temp[arr[i]]++;
        }

        for(int i=1; i<=n; i++){
            if(temp[i]>1)c++;
        }
        cout<<c<<endl;
    }
}
