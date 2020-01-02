#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,f=1;
    for(i=1; i<=n; i++){
        f*=i;
    }
    printf("%d\n",f);
    return 0;
}
