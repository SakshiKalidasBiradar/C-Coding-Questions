#include<stdio.h>
int RangeAddDisplay(int iStart, int iEnd)
{
    int iNo = 0;
    int iSum = 0;
    

    if(iStart < 0||iEnd < 0||iStart > iEnd)
    {
        return -1;
    }

    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
        iSum = iSum + iNo;
      
    }
    return iSum;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    iRet = RangeAddDisplay(iValue1,iValue2);
    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("%d",iRet);
    }

    return 0;
}