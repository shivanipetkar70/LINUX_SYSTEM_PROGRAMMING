#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<dirent.h>

#define BUFFERSIZE 1024

int main()
{
    char DirName[20];
    DIR *dp = NULL;
    struct dirent *entry = NULL;
    int fd = 0;
    char Fname[30];
    char Arr[BUFFERSIZE];
    int iRet1 = 0;
    
    printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

     printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write into the file\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(Fname, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    iRet1 = write(fd,Arr,strlen(Arr));

    printf("%d bytes gets succesfully written in the file \n",iRet1);

   
    int iRet2 = read(fd,Arr,sizeof(Arr));
    
     printf("%d bytes gets succesfully fetched from the file \n",iRet2);

    printf("Data from file is : %s\n",Arr);

    close(fd);
    return 0;
    
    return 0;
}

