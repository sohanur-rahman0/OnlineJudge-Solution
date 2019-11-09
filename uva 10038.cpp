#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,d,flag=0;
    while(cin>>n)
    {
        flag = 1;

        int arr[3001],ar[3001];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++)
        {
            ar[i] = abs(arr[i+1]-arr[i]);
        }
        sort(ar,ar+n-1);
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]!= i+1)
            {
                flag=0;
            }
        }

        if(flag==0)
            cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
    }

   return 0;
}
