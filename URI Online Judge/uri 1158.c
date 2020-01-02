#include<stdio.h>
int main()
{

    int i,tc,x,y,sum;
    scanf("%d",&tc);
    while(tc--)
    {
        sum=0;
        scanf("%d %d",&x,&y);
        if(x%2==1)
        {
            for(i=1; i<=y; i++)
            {
                sum+=x;
                x+=2;
            }
            printf("%d\n",sum);
        }
        else
        {
            x++;
            sum=0;
            for(i=1; i<=y; i++)
            {
                sum+=x;
                x+=2;
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}


