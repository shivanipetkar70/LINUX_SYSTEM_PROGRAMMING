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
    
    printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }
    
    while((entry = readdir(dp)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }
    
    fd = creat("AllCombine.txt",0777);

    closedir(dp);
    
    return 0;
 }
