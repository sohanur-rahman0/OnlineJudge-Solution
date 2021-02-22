#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10000];
    int count = 0;
    for(int i = 0 ; i< 10000; i++){
        arr[i] = rand() % 101;

        if(arr[i] >= 1 && arr[i]<= 50){
            count ++;
        }
    }

    printf("There are %d numbers between 1 to 50\n", count);
    printf("There are %d numbers greater than 50", 10000 - count);
}