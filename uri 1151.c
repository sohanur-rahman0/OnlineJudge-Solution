#include<stdio.h>
int main()
{
    int n,first = 0,second=1,next,i;
    scanf("%d",&n);
    if(n==0){
        printf("%d\n",first);
        return 0;
    }
    printf("%d",first);
    for(i=1; i<n; i++){
        if(i<=1)
            next = i;
        else{
            next = first + second;
            first = second;
            second = next;
        }

        printf(" %d",next);
    }
    printf("\n");
    return 0;
}
