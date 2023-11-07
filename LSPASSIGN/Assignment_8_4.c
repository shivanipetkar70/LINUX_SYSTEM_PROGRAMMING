#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/wait.h>
int main()
{
    int Ret1 = 0;
    int cpid1 = 0;
    int Exit_status1 = 0;
    int Ret2 = 0;
    int cpid2 = 0;
    int Exit_status2 = 0;

    Ret1 = fork();

    if(Ret1 == 0)  // Child  
    {
        execl("./process2","NULL",NULL);
    }
    
    Ret2 = fork();

    if(Ret2 == 0)  // Child  
    {
        execl("./process3","NULL",NULL);
    }
    else        // Parent
    {
        printf("Parent is running with PID : %d\n",getpid());
        cpid1 = wait(&Exit_status1);
        printf(" process2 terminated having PID %d with exit status %d\n",cpid1,Exit_status1);
        cpid2 = wait(&Exit_status2);
        printf("process3 terminated having PID %d with exit status %d\n",cpid2,Exit_status2);
    }

    return 0;
}
