//write program which accept number from user and display its factors in decreasing order
#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    for(iCnt = iNo; iCnt >= 1; iCnt--) 
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d",iCnt);

         if(iCnt != 1)
         {
            printf("*");
         }

           iMulti = iMulti*iCnt;

        }
    }  
    return iMulti;     
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

     iRet = MultiFact(iValue);
     printf("=%d",iRet);
     
    return 0;
}