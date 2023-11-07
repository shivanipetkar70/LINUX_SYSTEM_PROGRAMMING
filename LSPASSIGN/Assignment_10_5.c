
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void *ptr)
{
  printf("Inside thread \n");
  pthread_exit(NULL);
}



int main()
{
    pthread_t TID;
    int ret = 0;

    ret = pthread_create(&TID,        // Address of pthread_attr_t structure object
                          NULL,       // Thread attributes
                          ThreadProc, // Address of callback function
                          NULL);      // Parameters to callback function

    if(ret != 0)
    {
      printf("Unable to create thread\n");
      return -1;
    }
    printf("Thread1 is created with ID : %d\n",TID1);

   
    pthread_join(TID,NULL);
    
    printf("End of main thread\n");
    
    pthread_exit(NULL);
    return 0;
}
