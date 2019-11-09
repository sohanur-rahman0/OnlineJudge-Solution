#include<stdio.h>
int main()
{
    long long int tc,a,b;
    scanf("%lld",&tc);
    while(tc--){
        scanf("%lld %lld",&a,&b);
        if(a>=b){
            while(b != 0){
                if(a%10 != b%10){
                    printf("nao encaixa\n");
                    goto end;
                }
                a/=10;
                b/=10;
            }
            printf("encaixa\n");
        }
        else printf("nao encaixa\n");
         end:;
    }

    return 0;
}
