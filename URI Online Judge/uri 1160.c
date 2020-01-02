#include<stdio.h>
int main()
{
    long long int pa,pb,tc,count=0;
    double ga,gb;
    scanf("%lld",&tc);

    while(tc--)
    {
       count = 0;
        scanf("%lld %lld %lf %lf",&pa,&pb,&ga,&gb);
        while(pa<=pb)
        {

            pa *=(ga/100) + 1;
            pb *=(gb/100) + 1;
            count++;
            if(count >100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }


        }
        if(count <= 100)
            printf("%lld anos.\n",count);

    }
    return 0;
}
