#include<stdio.h>
int main()
{
    FILE *fp;
    int num;
    if((fp = fopen("input.txt","r")==NULL)){
        printf("Error! Opening File");
        exit(1);
    }
    fscanf(fp,"%d",&num);
    printf("Value of n = %d",num);
    fclose(fp);
    return 0;
}
