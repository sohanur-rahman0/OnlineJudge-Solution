#include<stdio.h>
#include<string.h>
int main()
{
    char str[10005];
    int a=0,i,l;
    while(gets(str)){
        l = strlen(str);
        for(i=0; i<l; i++){
            if(str[i]=='"'){
                a+=1;
                if(a%2==1)
                printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
