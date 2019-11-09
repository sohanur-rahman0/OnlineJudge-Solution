#include<stdio.h>
long long H(int n);
int main()
{
    long long int tc,ans,n,count;
    scanf("%lld",&tc);
    while(tc--){
            count = 0;
            scanf("%lld",&n);

    printf("Case %lld: %lld\n",++count,H(n));
    }
    return 0;
}

long long H( int n ) {
    long long res = 0;
    for( int i = 1; i <= n; i++ )
        res = n / i;
    return res;
}
