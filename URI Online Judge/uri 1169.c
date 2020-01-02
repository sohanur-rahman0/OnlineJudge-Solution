#include<stdio.h>
#include<math.h>
int main()
{
    int tc,x;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&x);
        printf("%lld kg\n",(long long)(pow(2,x)/12000));
    }
    return 0;
}
