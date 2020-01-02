#include<stdio.h>
int main()
{
int k,n,m,x,y,i;
while(scanf("%d",&k)==1){
if(k==0)
break;
scanf("%d %d",&n,&m);
for(i=0;i<k;i++)
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
