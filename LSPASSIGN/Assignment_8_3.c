#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include <sys/wait.h>
int main()
{
   int ret1 = 0, ret2 = 0,ret3 = 0;

   ret1 = fork();
   if(ret1 == 0)
   {
        execl("./Process2","NULL",NULL);
   }

     
   ret2 = fork();
   if(ret2 == 0)
   {
        execl("./Process3","NULL",NULL);
   }
   
   ret3 = fork();
   if(ret3 == 0)
   {
        execl("./Process4","NULL",NULL);
   }

     
    return 0;
}
