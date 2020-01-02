#include<stdio.h>
int main()
{
    long int tc,n,i,sum=0;
    scanf("%ld",&tc);
    while(tc--){
        scanf("%ld",&n);
        sum = 0;
        for(i=1; i<=n/2; i++){
            if(n%i==0)
                sum+=i;
        }
        if(sum == n)
            printf("%ld eh perfeito\n",n);
        else
            printf("%ld nao eh perfeito\n",n);
    }
    return 0;
}
