//write a program which Accepts number from user and return the count of even digits

#include<stdio.h>
int CountEvenDigit(int iNo)
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
        if(iNo % 2 == 0)
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);
    printf("Count of Even Digit  Is : %d",iRet);

   
    return 0;
}