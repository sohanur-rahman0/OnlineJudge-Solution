#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);                ///test case


    for(i=1; i<=n; i++)
    {
        long long m,a,b,c=0,d,count=0,f,j;
        scanf("%lld %lld",&a,&b);
        m=b;
        f=a-b;                     ///a-b korle jodi b, a er sub set hoy tobe sumation e b er jaygay 0 asbe.
                                   ///75123-123=75000,a te 123 er jaygate 000 boschay
        while(b != 0)
        {
            b /= 10;
            count++;              ///b er digit count korchi
        }

        for(j=0; j<count; j++)
        {
            if(f%10==0)
                c++;                /// a -b te 0 count korchi 75123-123=75000 ekhane 0 achay 3 ta
            f/=10;
        }


        if(c>=count)               /// 0 jodi b er digit er soman ba beshi boy taile encaixa
            printf("encaixa\n");

        else if(a<m)
            printf("nao encaixa\n");   /// suppose 654 to ar 54 r sub set na
        else
            printf("nao encaixa\n");   ///na hole nai
    }

    return 0;
}
