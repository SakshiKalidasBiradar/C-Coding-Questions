//write a program which Accept temprature in fahrenheit and convert it into celcius (1celcius = ( fahrenheit - 32)*(5/9))


#include<stdio.h>
double FToCs(float fTempInFah)
{
    double dCelcius = 0.0;
    
    dCelcius = ( fTempInFah - 32)*(5.0/9.0);
    return dCelcius;

    

}


int main()
{
    
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in fahrenheit : ");
    scanf("%f",&fValue);

   

    dRet = FToCs(fValue);
    printf("Temperature in celcius = %lf : ",dRet);

   
    return 0;
}