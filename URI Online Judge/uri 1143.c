#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sq,cu;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
            sq = pow(i,2);
            cu = pow(i,3);
        printf("%d %d %d\n",i,sq,cu);
    }
    return 0;
}
