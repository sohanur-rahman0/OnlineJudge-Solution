#include<stdio.h>
long long carry(long long a,long long b);
int main()
{
    long long a,b,c;
    while(1){
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)break;

        c = carry(a,b);
        if(c == 0)
            printf("No carry operation.\n");
        else if(c == 1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",c);
    }
    return 0;
}

long long carry(long long a,long long b){
    long long x,y,z,temp;
    z = 0;
    temp = 0;
    while(1){
        x = a%10;
        y = b%10;
        a/=10;
        b/=10;
        if((x+y+z)>=10){
            temp++;
            z = 1;
        }
        else z = 0;
       if(a==0 && b==0)break;

    }
    return temp;

}
