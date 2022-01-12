#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if(pid == 0)
    {
        printf("I am child process\n");
        pid_t pid2;
        pid2 = fork();

        if(pid2 == 0)
        {
            printf("I am child process 2\n");
            execlp("/bin/touch","touch","new_fork.c",NULL);
        }
        else
        {
            printf("I am parent process\n");
        }
    }
    else if(pid > 0)
    {
        printf("I am parent process\n");
    }
    else
    {
        printf("fork error\n");
    }
    return 0;
}