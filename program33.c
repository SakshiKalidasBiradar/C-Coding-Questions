//write a program to find even factorial of given number

#include<stdio.h>
int DisplayEvenFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d",iCnt);
        if(iCnt<iNo-1)
        {
            printf("*");
        }

        iFact = iCnt*iFact;
    }
    return iFact;

}
int main()
{
    int iValue = 0;

    printf("Enter Number  : ");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = DisplayEvenFact(iValue);

    printf("Even Factorial is : %d ",iRet);
    
    return 0;
}