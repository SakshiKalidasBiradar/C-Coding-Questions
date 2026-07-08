//write program which accept number from user and  if numner is less than 50 then print small ,if it is greater than 50 and less than 100 then print medium if it is greater than 100 then print large
#include<stdio.h>
void DisplayNumber(int iNo)
{
    
    if(iNo < 50 )
    {
        printf("small");
    }else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");

    }else 
    {
        printf("Large");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayNumber(iValue);
    return 0;

}