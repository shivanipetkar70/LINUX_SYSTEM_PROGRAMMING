#include<stdio.h>
#include<fcntl.h>
#include"sharedfile.h"

extern int acct(const char * *fd1 , const char *fd2)
{
    char ch1 ,ch2;
    
    ch1 = getc(fd1);
    ch2 = getc(fd2);
    
    while(( ch1 !=EOF) && (ch2 != EOF) && (ch1 == ch2))
    {
    
    ch1 = getc(fd1);
    ch2 = getc(fd2);
    }
    if(ch1 == ch2)
    {
       return 0;
    }
    else
    {
      return -1;
    }
    
    
}

