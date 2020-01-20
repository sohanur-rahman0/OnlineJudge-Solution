#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum=0.0;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=1.0/i;
    }
    cout<<fixed<<setprecision(12)<<sum<<endl;
}
