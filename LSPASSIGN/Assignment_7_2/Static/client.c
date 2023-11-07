#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{

const char *fd1 ;
const char *fd2 ;
char Fname1[30] ;
char Fname2[30] ;
 int iRet = 0;


 printf("Enter the first file name that you want to open\n");
 scanf("%s",Fname1);
 
 printf("Enter the second file name that you want to open\n");
 scanf("%s",Fname2);
 fd1 = popen(Fname2, O_RDONLY);
 fd2 = popen(Fname1, O_RDONLY); 
   if((fd1 == NULL)|| (fd2 == NULL))
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    iRet = extern int acct(fd1,fd2);
    
    if(iRet == 0)
    {
      printf("Files are identical \n");
    }
    else
    {
      printf("Files are not identical \n");
    }
    
    return 0;
    
  }  

