//Accept number from user and check it is even or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL chkEven(int iNo)
{
     if(iNo%2==0)
     {
          printf("Even Number");
     }
     else
     {
          printf("Odd Number");
     }
}


int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("Enter Number : ");
     scanf("%d",&iValue);

     bRet = chkEven(iValue);
     return 0;
}