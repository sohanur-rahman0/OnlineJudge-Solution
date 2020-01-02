#include<stdio.h>
int main()
{
    int n,i,l=0;

    while(scanf("%d",&n)!=EOF){
            if(n==0)return 0;
            else{
    for(i=1; i<=n; i++){
            l++;
        if(n==l)printf("%d",i);
        else printf("%d ",i);
        if(n==l){
            l=0;
            printf("\n");
        }
    }
            }
    }
    return 0;
}
