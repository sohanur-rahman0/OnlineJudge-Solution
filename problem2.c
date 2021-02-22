#include<stdio.h>

int cards(int jack, int queen, int king)
{
    int sum = jack + queen + king;
    if ( sum <= 21){
        return sum;
    } else {
        return sum - 10;
    }
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    printf("%d", cards(a,b,c));
}