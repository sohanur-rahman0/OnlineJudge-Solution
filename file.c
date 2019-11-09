#include<stdio.h>
int main()
{
    char msg[]= "Hello World!!!";
    int i;
    FILE *fp;
    fp = fopen("input.txt","w");
    i = 0;
    while(1){
        if(msg[i]==NULL)break;
        else
            fprintf(fp,"%c",msg[i]);
        i++;
    }
    fclose(fp);
}
///prints the string in the file
