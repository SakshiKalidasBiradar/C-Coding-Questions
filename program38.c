//write a program which Accepts distance in km and convert it into meter(1km = 1000m)

#include<stdio.h>
int KMToMeter (int iNo)
{
    int iMeter= 0;
    iMeter = iNo*1000;
    return iMeter;
    
}


int main()
{
    
    int iValue  = 0;
     int iRet = 0;

    printf("Enter Distace : ");
    scanf("%d",&iValue);

  

    iRet = KMToMeter(iValue);
    printf("Distance in meter %d: ",iRet);

   
    return 0;
}