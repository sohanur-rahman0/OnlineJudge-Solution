#include<stdio.h>
int main()
{
    int n,k,temp;
    while(scanf("%d %d",&n,&k)!=EOF){
        temp=n;
        while(n>=k){
            temp+=(n/k);
            n = (n/k)+(n%k);
        }
        printf("%d\n",temp);
    }
    return 0;
}
