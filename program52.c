#include<stdio.h>
void EvenRangeDisplay(int iStart, int iEnd)
{
    int iNo = 0;


    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }


    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
        if(iNo % 2 == 0)
        {
            printf("%d\t",iNo);
        }
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

    EvenRangeDisplay(iValue1,iValue2);

    return 0;
}