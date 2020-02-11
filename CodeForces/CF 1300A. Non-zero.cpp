#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,sum=0,c=0;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==0){
                c++;
                arr[i] = 1;
            }
            sum+=arr[i];
        }
       }
         if(sum!=0)cout<<c<<endl;
         else{
            cout<<c+1<<endl;
         }
    }
}
