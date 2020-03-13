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
        for(int i=0; i<n; i++)cin>>arr[i];
        bool flag = false;


        for(int i=0; i<n; i++)
        {
            for(int j=i+2; j<n; j++){
                if(arr[i]==arr[j]){
                    flag = true;
                }
            }
        }
        if(flag == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

