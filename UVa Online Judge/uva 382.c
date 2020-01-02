#include<stdio.h>
int main()
{
    int n,i,sum=0,s=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(s!=1)
            printf("PERFECTION OUTPUT\n");
        s=1;
        sum = 0;

        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(sum == n)
            printf("%5d PERFECT\n",n);

        else if(sum < n)
            printf("%5d DEFICIENT\n",n);
        else if(sum >n)
            printf("%5d ABUNDANT\n",n);

    }
    printf("END OF OUTPUT\n");
    return 0;
}
