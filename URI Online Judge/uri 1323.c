#include<stdio.h>
int main()
{
    int n,a;
    while(1){
        scanf("%d",&n);
        if(n==0)break;

        a = (n*(n+1)*(2*n+1))/6;
        printf("%d\n",a);

    }
    return 0;
}
