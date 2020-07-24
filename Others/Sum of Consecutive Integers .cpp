#include <bits/stdc++.h>
using namespace std;

long long int counter(long long int N)
{

    long long int count = 0,L;
    double a;
    for(L=1; L*(L+1)< 2*N; L++)
    {
        a = (1.0*N-(L*(L+1))/2)/(L + 1);
        if (a-(int)a == 0.0)
            count++;
    }
    return count;
}


int main()
{
    long long int tc,n,c=1;
    cin>>tc;
    while(tc--){
            cin>>n;
            cout<<"Case "<<c++<<": "<<counter(n)<<endl;

    }
    return 0;
}
