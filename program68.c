//Accept N Numbers from user and check whether that number contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
  
    int iCnt = 0;
    int iEven = 0,iOdd = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]  == 11 )
        {
            return true;
        }
        
        
    }
    return false;
    
}
#include<stdio.h>
int main()
{
    int iSize = 0,iCnt = 0;
    BOOL bRet = false;
    int*p=NULL;

    printf("Enter Number of elements:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }
    printf("Enter %d Elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize);
    if(bRet == true)
    {
        printf("11 is present");

    }
    else
    {
        printf("11 is not present");
    }
    


    free(p);

    return 0;



}
