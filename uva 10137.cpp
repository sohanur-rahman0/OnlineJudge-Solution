#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double m,total,avg,arr[1001],sum=0,varup,varl;
    while(true)
    {
        sum = 0,varup=0,varl=0;

       cin>>n;
       if(n==0)break;
       for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
       }

       avg = sum/n;

       varup = 0;
       for(int i=0; i<n; i++){
        if(arr[i]>avg)
            varup+=(long)((arr[i]-avg)*100);
       }
       varl = 0;
       for(int i=0; i<n; i++){
        if(arr[i]<avg)
            varl+=(long)((avg-arr[i])*100);
       }
       //cout<<varup<<" "<<varl<<endl;
       varup/=100.00;
       varl/=100.00;
      if(varup>varl)
        cout<<fixed<<setprecision(2)<<"$"<<varup<<endl;
      else
        cout<<fixed<<setprecision(2)<<"$"<<varl<<endl;


    }
    return 0;
}
