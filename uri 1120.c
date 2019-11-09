#include<stdio.h>
#include<string.h>
int main()
{

    while(100){
            char d,str[1000],check;
            int c=0,i,flag=1,len;
        scanf("%c",&d);
    if(d=='0')break;
    scanf("%s",&str);
    len = strlen(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==d)c++;
        if(str[i]!=d){
            check = str[i];
            if(check!='0')
                flag=2;
            if(flag!=1)
                printf("%c",str[i]);
            else if(flag==1 && str[i+1]=='\0')
                printf("0");
        }
    }
    if(c==i)
        printf("0");
    printf("\n");

    }
    return 0;
}
