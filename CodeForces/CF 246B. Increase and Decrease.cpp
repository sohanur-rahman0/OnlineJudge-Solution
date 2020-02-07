#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        s+=t;
    }
    s%n?cout<<n-1<<endl:cout<<n<<endl;
}
