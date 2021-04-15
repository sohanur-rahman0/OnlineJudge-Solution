#include<stdio.h>

int main()
{
    char n[1000];
    int m;
    scanf("%s",n);
    printf("%s",n);
    getchar();
    scanf("%d", &m);
    int arr[m];
    for(int i=0; i<m; i++){
        scanf("%d", arr[i]);
    }

    int sum = 0;

    for(int i=0; n[i]; i++){
        sum += (int)n[i];
    }

    printf("%d", sum);


}