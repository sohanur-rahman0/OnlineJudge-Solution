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
        bool isEven = false;
        bool isOdd = false;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0){
                isEven = true;
            }else{
                isOdd = true;
            }

        }
         if(isEven && isOdd)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
