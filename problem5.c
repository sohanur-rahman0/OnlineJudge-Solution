#include<stdio.h>
int main()
{
    printf("--multiplication table------\n");
    printf("  1  2  3  4  5  6  7  8  9  \n");
    printf("----------------------------\n");
    for(int i=1; i<10; i++){
        for(int k=2; k<=i; k++){
            printf("   ");
        }
        for(int j=i; j<10; j++){
            printf("%3d", i*j);
        }
        printf("\n");
    }

    printf("\n----------------------------\n");
}