#include<stdio.h>
int main()
{
    int x,y,n=0,i;
    scanf("%d %d",&x,&y);
    for(i=1; i<=y; i++){
            n++;
        if(n==x)printf("%d",i);
        else printf("%d ",i);
        if(n==x){
            n=0;
            printf("\n");
        }

    }
    return 0;
}
