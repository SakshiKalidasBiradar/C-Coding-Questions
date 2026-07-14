#include<stdio.h>
void RangeDisplay(int iStart, int iEnd)
{
    int iNo = 0;


    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }


    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}