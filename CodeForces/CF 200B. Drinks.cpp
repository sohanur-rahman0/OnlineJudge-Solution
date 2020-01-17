#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin>>n;
    double arr[n];
    for(auto i:arr)
    {
        cin>>i;
        sum+=i;
    }
    cout<<fixed<<setprecision(12)<<sum/n<<'\n';

}
