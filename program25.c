//write program which accpet number from user and print first 5 multiples of N.
#include<stdio.h>
void MultiDisplay(int iNo)
{
     int iCnt = 0;
     int iMulti = 1;
     for(iCnt = 1; iCnt <= 5;iCnt++)
     {
        printf("%d\n",iNo*iCnt);
     }
     
     
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultiDisplay(iValue);

    return 0;
}
