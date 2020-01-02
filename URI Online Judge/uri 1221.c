#include<stdio.h>
int isprime(int n);

int main()
{
    int tc,n,result;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        result = isprime(n);
        if(result == 1)
            printf("Prime\n");
        else
            printf("Not Prime\n");

    }
    return 0;
}
int isprime(int n)
{
    int i;
    for(i=2; i*i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
