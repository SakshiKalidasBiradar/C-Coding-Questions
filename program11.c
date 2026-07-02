//program which accepts one number from user and print that number of even numbers on screen
#include<stdio.h>
void printEven(int iNo)
{
    int iCnt = 0;
    if(iNo<=0)
    {
        return;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt*2);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}
