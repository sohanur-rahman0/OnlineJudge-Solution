#include<stdio.h>
int main()
{
    double num[100];
    int i;

    for(i=0; i<100; i++){
           scanf("%lf",&num[i]);
    }
     for(i=0; i<100; i++){
           if(num[i]<=10)
            printf("A[%d] = %.1lf\n",i,num[i]);
    }
    return 0;
}
