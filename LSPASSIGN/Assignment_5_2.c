#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#pragma pack(1)
struct Employee
{
    int Empno;
    char Ename[20];
    char City;
    int Age;
};

int main(int argc, char *argv[])
{
    struct Employee sobj;
    char Ename[20];
    int fd = 0;

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    read(fd,&sobj,sizeof(sobj));

    printf("Roll number : %d : \n",sobj.Empno);
    printf("Name : %s : \n",sobj.Ename);
    printf("City : %f : \n",sobj.City);
    printf("Age : %d : \n",sobj.Age);

    close(fd);

    return 0;
}
