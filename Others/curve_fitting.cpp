#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 
    int n,i;
    double sumx=0,sumy=0,sumxy=0,sumx2=0;
    float a,b;
    n = 5;
    double x[5]={1,2,3,4,5};
    double y[5]={0.6,2.4,3.5,4.8,5.7};
    for(i=0;i<=n-1;i++)
    {
        sumx=sumx +x[i];
        sumx2=sumx2 +x[i]*x[i];
        sumy=sumy +y[i];
        sumxy=sumxy +x[i]*y[i];
 
    }
    a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    printf("\n\nThe line is Y=%3.3f +%3.3f X",a,b);
    return(0);
}
