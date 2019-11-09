#include<stdio.h>
#include<string.h>
int main()
{
    char ch[102],ch1[102];
    int i,j,l,hl,n,k;
    scanf("%d",&n);
    getchar();
    for(i = 0;i < n;i++){
        gets(ch);
        l=strlen(ch);
        hl=l/2;
        k=0;
        for(j = hl-1;j >= 0;j--){
            ch1[k]=ch[j];
            k++;
            }
        k=hl;
        for(j = l-1;j >= hl;j--){
            ch1[k]=ch[j];
            k++;
        }
        ch1[l]='\0';
        puts(ch1);
    }
    return 0;
}
