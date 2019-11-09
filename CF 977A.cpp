#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0)
            n-=1;
        else
            n/=10;
    }
    cout<<n;
}
