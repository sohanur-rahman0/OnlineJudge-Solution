#include<iostream>
using namespace std;
int main()
{
    int i,tc,n;
    cin>>tc;
    long long f[61];
    f[0]=0;
    f[1]=1;
    for(i=2; i<=60; i++)
    {
        f[i] = f[i-2]+f[i-1];
    }
    while(tc--){
            cin>>n;
        cout<<"Fib(" << n << ") = "<<f[n]<<endl;
    }
    return 0;
}
