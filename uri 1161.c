#include<stdio.h>
int main()
{
    long long int a,b,tema,temb,i;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        tema=1;
        temb=1;
        for(i=1; i<=a; i++){
            tema*=i;
        }
        for(i=1; i<=b; i++){
            temb*=i;
        }
        printf("%lld\n",tema+temb);
    }

    return 0;
}
