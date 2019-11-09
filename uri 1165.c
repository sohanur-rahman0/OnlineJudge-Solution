#include<stdio.h>
int isprime(int n);

int main()
{
    long int tc,n,result;
    scanf("%ld",&tc);
    while(tc--)
    {
        scanf("%ld",&n);
        result = isprime(n);
        if(result == 1)
            printf("%ld eh primo\n",n);
        else
            printf("%ld nao eh primo\n",n);

    }
    return 0;
}
int isprime(int n)
{
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
