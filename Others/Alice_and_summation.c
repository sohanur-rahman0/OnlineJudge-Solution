#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    
    int sum = 0;
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            sum += i*j;
        }
        
        
        
    }
    
    printf("%d\n", sum );

}