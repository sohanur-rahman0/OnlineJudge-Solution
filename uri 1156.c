#include<stdio.h>
int main()
{
    double sum=0,b=1,temp;
    int i;
    for(i=1; i<=39; i+=2){
        temp = i/b;
        sum +=temp;
        b*=2;
    }
    printf("%.2lf\n",sum);
}
