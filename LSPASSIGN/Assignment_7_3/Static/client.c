#include<stdio.h>
#include<fcntl.h>
#include<stdbool.h>
#include"sharedfile.h"
#include"sharedfile1.h"

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet1 = false;
    bool bRet2 = false;
    printf("Enter number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter number : \n");
    scanf("%d",&iValue2);

    bRet1 = CheckPrime(iValue1);
    bRet2 = CheckPerfect(iValue2);
    if(bRet1 == true)
    {
        printf("%d is prime number \n",iValue1);
    }
    else
    {
        printf("%d is not a prime number \n",iValue1);
    }
     //bRet2 = CheckPerfect(iValue2);
    if(bRet2 == true)
    {
        printf("%d is a perfect number\n",iValue2);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue2);        
    }

    return 0;
}
