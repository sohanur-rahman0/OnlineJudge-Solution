#include<stdio.h>
int main()
{
    double s=0,temp,a=0;
    while(100){
        if(a==2)
            break;
        scanf("%lf",&temp);
        if(temp>=0 && temp<=10){
            a++;
            s=s+temp;
        }
        else
        printf("nota invalida\n");
    }

    printf("media = %.2lf\n",s/2.00);
    return 0;


}
