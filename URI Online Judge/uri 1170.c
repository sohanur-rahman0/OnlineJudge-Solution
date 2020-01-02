#include<stdio.h>
int main()
{
    int tc,count;
    scanf("%d",&tc);
    double x;
    while(tc--){
            count = 0;
        scanf("%lf",&x);
    while(x>1){
        x/=2;
        count++;
    }
    printf("%d dias\n",count);

    }
    return 0;
}
