#include <bits/stdc++.h>
using namespace std;

long long int counter(long long int N)
{

    long long int co = 0,n=2;
    double a;
    while((2*N+n-n*n)>0)
    {
        a = (2*N+n-(n*n)/(2*n));
        if (a-(int)a == 0.0)
            {
             co++;
             n+=1;
            }
    }
    return co;
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
