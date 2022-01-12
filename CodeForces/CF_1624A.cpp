#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int m = INT_MIN;
        int mi = INT_MAX;
        for(int i=0; i<n; i++) {
            if(arr[i]>m) {
                m = arr[i];
            }

            if(arr[i]<mi) {
                mi = arr[i];
            }
        }
        cout<<m-mi<<endl;
    }
}