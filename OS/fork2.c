#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t pid;
    pid = fork();

    if(pid==0){
        printf("I am child process\n");
        int n = 5;
        int fact = 1;
        for(int i =1; i<=n; i++){
            fact*=i;
        }
        printf("factorial of %d is %d\n",n,fact);
    } else if (pid > 0)
    {
        printf("I am parent process\n");
    } else {
        printf("fork error\n");
    }
}