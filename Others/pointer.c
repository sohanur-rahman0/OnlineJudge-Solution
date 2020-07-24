#include<stdio.h>
int main()
{
    int *p,a=5;
    p = &a;
    printf("%c\n",a);
    printf("%c\n",&a);
    printf("%d\n",*p);
    printf("%p\n",&*p);

}
