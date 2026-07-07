//write program which accept number from user and print that number of $ & * on screen
/* Input : 5
   output : $ * $ * $ * $ * $
*/ 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}