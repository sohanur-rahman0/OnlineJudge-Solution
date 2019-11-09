#include<stdio.h>
int main()
{
    int num[10],i,v;
    scanf("%d",&v);

    for(i=0; i<10; i++){
            num[i]=v;
        printf("N[%d] = %d\n",i,num[i]);
        v*=2;
    }
    return 0;
}

