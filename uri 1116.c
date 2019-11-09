#include<stdio.h>
int main()
{
    int tc;
    double x,y;
    scanf("%d",&tc);
    while(tc--){
            scanf("%lf %lf",&x,&y);
    if(y==0)
        printf("divisao impossivel");
        else
        printf("%.1lf",x/y);
    }
    return 0;
}
