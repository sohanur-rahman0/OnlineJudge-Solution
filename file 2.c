#include<stdio.h>
int main()
{
    int a=55,b=45;
    FILE *fp;
    fp = fopen("input.txt","w");

    fprintf(fp,"%d\n",a+b);
    fclose(fp);
}
///takes input from the program and output their sum in the file
