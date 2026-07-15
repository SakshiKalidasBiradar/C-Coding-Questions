//write a program which Accepts number from user and count frequency of 2 int it

#include<stdio.h>
int Countfour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = Countfour(iValue);
    printf("Frquency of 4 is : %d\n",iRet);

    return 0;
}

