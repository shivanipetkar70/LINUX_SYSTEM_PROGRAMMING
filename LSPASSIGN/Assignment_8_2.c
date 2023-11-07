#include<unistd.h>
#include<stdio.h>

int main()
{
   
    int ret1 = fork();
  
    int ret2 = fork();
  
    if (ret1 > 0 && ret2 > 0) 
    {
        printf("main process\n");
        printf("%d %d \n", ret1, ret2);
        printf(" my id is %d \n", getpid());
    }
    else if (ret1 == 0 && ret2 > 0)
    {
        printf("First process\n");
        printf("%d %d \n", ret1, ret2);
        printf("my id is %d  \n", getpid());
    }
    else if (ret1 > 0 && ret2 == 0)
    {
        printf("Second process\n");
        printf("%d %d \n", ret1, ret2);
        printf("my id is %d  \n", getpid());
    }
    else {
        printf("third process\n");
        printf("%d %d \n", ret1, ret2);
        printf(" my id is %d \n", getpid());
    }
    return 0;

}

