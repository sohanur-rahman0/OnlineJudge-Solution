#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    vector <long long >vr;
    for (int i=0; i<4; i++)
    {
        cin>>n;
        vr.push_back(n);

    }
    sort(vr.begin(),vr.end());
    long long a=vr[3]-vr[0];
    long long b=vr[3]-vr[1];
    long long c=vr[3]-(a+b);
    cout<<a<<" "<<b<<" "<<c;
}
