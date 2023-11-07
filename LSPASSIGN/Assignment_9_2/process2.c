80% of storage used … 
If you run out, you won't have enough storage to create, edit and upload files. Get 100 GB of storage for ₹130.00 ₹35.00/month for 3 months.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Buffer[512];
    int iCnt = 0, iRet = 0, i = 0, fd = 0;

    fd = open("Demo.txt",O_RDONLY);

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet ; i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                iCnt++;
            }
        }
    }

    printf("Number of capital characters are : %d\n",iCnt);

    close(fd);
    return 0;
}
