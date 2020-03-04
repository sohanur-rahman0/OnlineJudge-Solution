#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int nec[n],brac[n],sum[n];
        for(int i=0; i<n; i++)cin>>nec[i];
        for(int i=0; i<n; i++)cin>>brac[i];
        sort(nec,nec+n);
        sort(brac,brac+n);
        for(int i=0; i<n; i++){
            sum[i] = nec[i] + brac[i];
        }
        sort(sum,sum+n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(sum[i]==sum[j]){
                    swap(brac[i],brac[j]);
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<nec[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<brac[i]<<" ";
        }cout<<endl;
    }
}
