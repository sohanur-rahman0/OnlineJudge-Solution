#include<stdio.h>
int main()
{
    int h1,h2,d1,d2,m1,m2,s1,s2;
    char ch1[5],ch2[5];
    scanf("%s%d",ch1,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s%d",ch2,&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    int d,h,m,s;
    s=(d2*86400+h2*3600+m2*60+s2)-(d1*86400+h1*3600+m1*60+s1);
    d=s/86400;
    h=s%86400;
     m=h%3600;
     printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h/3600,m/60,m%60);
     return 0;
}
