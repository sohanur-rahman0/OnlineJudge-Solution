#include<stdio.h>
int main()
{
    float i=0,j=1;
    while(i<=2.1){
        printf("I=%.1lf J=%.1lf\n",i,i+j);
        printf("I=%.1lf J=%.1lf\n",i,i+j+1);
        printf("I=%.1lf J=%.1lf\n",i,i+j+2);
        i+=0.2;
    }
    return 0;
}
