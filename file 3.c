#include<stdio.h>
int main()
{
    int a,b;
    FILE *fp;
    fp = fopen("input.txt","r");
    fscanf(fp,"%d %d",&a,&b);
    printf("%d\n",a+b);
    fclose(fp);
}
///takes input from the file and output their sum on the console
