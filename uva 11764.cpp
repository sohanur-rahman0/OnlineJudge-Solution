#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,u,l,w,i,c=1;
    cin>>tc;
    while(tc--)
    {
        u=0;l=0;
        cin>>w;
        int arr[w];
        for(i=0; i<w; i++){
            cin>>arr[i];
        }
        for(i=0; i<w-1; i++){
            if(arr[i]>arr[i+1])
                l++;
            else if(arr[i]<arr[i+1])
                u++;
        }
        cout<<"Case "<<c++<<": "<<u<<" "<<l<<endl;

    }
    return 0;
}
