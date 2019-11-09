#include<stdio.h>
int main()
{
    int n,sum=0,i;
    double avg;
    for(i=1; ; i++){
        scanf("%d",&n);
        if(n<0)break;
        sum+=n;
    }
    avg = sum /(double)(i-1);
    printf("%.2lf\n",avg);

    return 0;
}
