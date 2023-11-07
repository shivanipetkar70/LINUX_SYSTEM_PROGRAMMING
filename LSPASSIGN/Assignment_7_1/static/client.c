#include<stdio.h>
#include "sharedfile.h"

int main()
{
    int a = 10, b = 11, ret1 = 0,ret2 = 0,ret3 = 0,ret4 = 0;

    ret1 = Addition(a,b);
    ret2 = Substraction(a,b);
    ret3 = Multiplication(a,b);
    ret4 = Division(a,b);
   
    printf("Addition is : %d\n",ret1);
    printf("Substraction is :%d\n",ret2);
    printf("Multiplication is :%d\n",ret3);
    printf("Division is :%d\n",ret4);

    return 0;
}


