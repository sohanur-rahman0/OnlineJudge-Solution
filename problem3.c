#include<stdio.h>

void date(int n,int *month,int *day,int *year)
{
    *day = n % 100;
    n/=100;
    *month = n%100;
    n/=100;
    *year = n;
}

int main()
{
    int month, day, year;
    int n;
    scanf("%d", &n);
    date(20210116, &month, &day, &year);
    printf("%d %d %d", month, day, year);

}