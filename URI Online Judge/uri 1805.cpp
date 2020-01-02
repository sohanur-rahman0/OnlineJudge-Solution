#include<iostream>
using namespace std;

long long sum(long long n)
{
    return (n*(n+1))/2;
}
long long sumInRange(long long a, long long b)
{
    return sum(b)-sum(a);
}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<sumInRange(a,b)<<endl;
}
