#include<stdio.h>
int main()
{
    int tc,n,m;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/3)*(m/3));

    }
    return 0;
}
