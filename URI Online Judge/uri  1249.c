#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF){
        if(a>='a' && a<='z'){
            if(a+13>'z')
                printf("%c",a-13);
                else
           printf("%c",a+13);
        }
        else if(a>='A' && a<='Z'){
            if(a+13>'Z')
                printf("%c",a-13);
                 else
           printf("%c",a+13);
        }
        else
            printf("%c",a);
    }


    return 0;
}
