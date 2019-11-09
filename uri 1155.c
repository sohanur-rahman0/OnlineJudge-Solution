#include<stdio.h>
int main()
{
    double s,d=1.00,sum=0;
    int i;
    for(i=1; i<=100; i++){
        sum+=(d/i);
    }
    printf("%.2lf\n",sum);
    return 0;
}
