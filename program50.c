//write a program which Accepts Area in Square feet and convert it into  square meter(1square feet  = 0.0929Square meter)

#include<stdio.h>
double dSFeetToSMeter (float fArea)
{
    double dMeter = 0.0;
    dMeter = fArea*0.0929;
    return dMeter;
    
}


int main()
{
    
    float fValue  = 0.0;
    double dRet = 0.0;

    printf("Enter area in Sq meter : ");
    scanf("%f",&fValue);

  
    dRet = dSFeetToSMeter(fValue);
    printf("Area in Square meter = %lf: ",dRet);

   
    return 0;
}