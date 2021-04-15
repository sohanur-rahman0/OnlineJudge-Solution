#include<stdio.h>
#include<math.h>

int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    

    

    if(is_prime(sum)){
        printf("Sum of all elements is a prime number\n");
    } else {
        printf("Sum of all elements is not a prime number\n");
    }


}