#include<stdio.h>

int main()
{
    for( int i = 1; i <= 10 ; i++){
        for ( int j = 10; j > i; j--){
            printf("#");
        }
        printf("**********\n");
    }
}