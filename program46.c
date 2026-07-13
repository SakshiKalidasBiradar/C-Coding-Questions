//write a program which Accepts number from user and calculate its area

#include<stdio.h>
double CircleArea(float fRadius)
{
    
    double dArea = 0.0;
    dArea = 3.14*fRadius*fRadius;
    return dArea;

}


int main()
{
    
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle = %f : ",dRet);

   
    return 0;
}