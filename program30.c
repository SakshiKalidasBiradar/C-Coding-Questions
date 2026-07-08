//write program which accept number from user and display it's table in reverse order 
#include<stdio.h>
void TableDisplay(int iNo)
{
     int iCnt = 0;
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     for(iCnt = 10; iCnt >= 1; iCnt--)
     {
        printf("%d\t",iNo*iCnt);
     }
    
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    TableDisplay(iValue);

    return 0;
}
