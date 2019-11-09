#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    int l;
     gets(s);
     l = strcmp(s,"hello");
     if(l==0)
        puts("hi");
     else
        puts("bye");


}

