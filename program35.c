//write a program which return differences between even and odd factorial of given number

#include<stdio.h>
int DisplayEvenOddFact(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iCnt*iEvenFact;
    }
     for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
     {
        iOddFact = iCnt*iOddFact;
     }
     return(iEvenFact-iOddFact);

}
int main()
{
    
      int iValue = 0;

    printf("Enter Number  : ");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = DisplayEvenOddFact(iValue);

    printf(" Difference between Even Odd Factorial is : %d ",iRet);
    return 0;
}