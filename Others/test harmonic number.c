#include<stdio.h>
double sum(double n);
int main()
{
    long long int tc,ans,count;
    double n;
    scanf("%lld",&tc);
    while(tc--){
            count = 0;
            scanf("%lf",&n);

    printf("Case %lld: %lld\n",++count,sum(n));
    }
    return 0;
}

double sum(double n)
{

    if (n < 2)
        return 1;

    else
        return 1 / n + (sum(n - 1));
}
