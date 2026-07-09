//write program : Accept amount in us dollar and return its corroesponding value in Indian Currency consider 1$ as 70 ruppes
#include<stdio.h>
int DollerToINR(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    iAns = iNo*70;
    return iAns;


}
int main()
{
    int iValue = 0;

    printf("Enter Number in USD : ");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = DollerToINR(iValue);

    printf("Value in INR Is : %d ",iRet);
    
    return 0;
}