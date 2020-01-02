#include<stdio.h>
int main()
{
int tc,n,m,x,y,i;
while(scanf("%d",&tc)==1){
if(tc==0)
break;
scanf("%d %d",&n,&m);
while(tc--)
{
scanf("%d %d",&x,&y);
if(x==n || y==m){
    printf("divisa\n");
}
else if(x>n && y>m){
    printf("NE\n");
}
else if(x<n&&y>m){
    printf("NO\n");
}
else if(x<n&&y<m){
    printf("SO\n");
}
else if(x>n&&y<m){
    printf("SE\n");
}
}
}
return 0;
}
