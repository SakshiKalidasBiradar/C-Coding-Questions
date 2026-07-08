//write a program to find factorial of given number
#include<stdio.h>
int FactDisplay(int iNo)
{
     int iFact = 1;
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     while(iNo > 0)
     {
        iFact = iFact*iNo;
        iNo--;
     }
     return iFact;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDisplay(iValue);
    printf("Factorial is : %d",iRet);

    return 0;
}
