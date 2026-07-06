//program which accept number from user and dsiplay its multiplication factors
#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d",iCnt);
            if(iCnt != iNo)
            {
                printf("*");
            }
         iMulti = iMulti * iCnt;
        }
          
    }
    return iMulti;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("=%d",iRet);

    return 0;
}