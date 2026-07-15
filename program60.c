//write a program which Accepts number from user and display digit which is less than 6

#include<stdio.h>
int DisplayCount(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = DisplayCount(iValue);
    printf("%d",iRet);

    return 0;
}

