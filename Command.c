#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int ans = 0;
    printf("Name of executable is : %s\n",argv[0]);
    printf("Number of command line arguments are : %d\n",argc);
   
    ans = atoi(argv[1]) + atoi(argv[2]);    //atoi ACII to Integer
    printf("Addition is : %d\n",ans);

    return 0;
}