#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int l,i,count=0;

    gets(str);

    l = strlen(str);

    for(i=0; i<l; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            count++;
        }

    }
    printf("Number of letter:%d",count);
}
