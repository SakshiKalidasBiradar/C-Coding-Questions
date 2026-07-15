//write a program which Accepts number from user and return the reverse of digits

#include<stdio.h>
void CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
    }

}


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CountEvenDigit(iValue);
    return 0;
}