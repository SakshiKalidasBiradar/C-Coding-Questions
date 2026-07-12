//write a program which Accepts number from user and return the count of odd digits

#include<stdio.h>
int CountOddDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iNo % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("odd Number : ");
    scanf("%d",&iValue);

    iRet = CountOddDigit(iValue);
    printf("Count of odd Digit  Is : %d",iRet);

   
    return 0;
}