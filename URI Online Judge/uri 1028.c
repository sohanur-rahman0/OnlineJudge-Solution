#include<stdio.h>
int GCD(int i,int j);

int main()
{
    int tc,i,j,gcd=0;
    scanf("%d",&tc);
    while(tc--){
            scanf("%d %d",&i,&j);
        gcd = GCD(i,j);
        printf("%d\n",gcd);
    }
    return 0;
}

int GCD(int i,int j)
{
    if(j!=0)
        return GCD(j,i%j);
    else
        return i;
}
