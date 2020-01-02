#include<stdio.h>
int main()
{
    int tc,a,b,i,sum;
    scanf("%d",&tc);
    while(tc--){
            scanf("%d %d",&a,&b);
            sum=0;

    if(a<b){for(i=a+1; i<b; i++){

        if(i%2!=0){
            sum+=i;
        }
    }
    }
    else if(a>b){
        for(i=b+1; i<a; i++)
        if(i%2!=0){
            sum+=i;
        }
    }
    else if(a=b){
        sum=0;
    }
    printf("%d\n",sum);

    }
    return 0;
}
