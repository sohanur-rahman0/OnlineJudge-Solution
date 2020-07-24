#include<stdio.h>
int main()
{
    int a[5],i,j,c=0,b[5],k;
    for (i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }


    for (j=0; j<5; j++)
    {
        if (a[j]>=5)
        {
            b[c]=a[j];
            c++;
        }
    }

    for (k=0; k<c; k++)
    {
        printf("b[%d]=%d \n",k,b[k]);
    }

}
