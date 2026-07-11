//write a program which Accepts Width and height of rectangle from user and calculate its area

#include<stdio.h>
double RectangleArea(float fWidth,float fHeight)
{
    
    double dArea = 0.0;
    dArea = fWidth*fHeight;
    return dArea;

}


int main()
{
    
    float fValue1  = 0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);
    printf("Area of circle = %f : ",dRet);

   
    return 0;
}