#include<stdio.h>
#include<string.h>

int main()
{
    int tc,l,i,len,p;
    char s[10000],s1[10000];
    scanf("%d ",&tc);
////getchar();
    while(tc--){
        gets(s);

        l = strlen(s);
        for(i=0; i<l; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                s[i]+=3;
        }
        p=0;

        for(i=l-1; i>=0; i--){
            s1[p]=s[i];
            p++;
        }
        s1[p]='\0';


        for(i=l/2; i<l; i++){
            s1[i]-=1;
        }
        printf("%s\n",s1);
    }
    return 0;
}
