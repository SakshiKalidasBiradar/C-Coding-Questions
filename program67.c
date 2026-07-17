//Accept N Numbers from user and return Difference between frquency of even and odd numbers 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
  
    int iCnt = 0;
    int iEven = 0,iOdd = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 )
        {

            printf("Even Number :%d\n",Arr[iCnt]);
            iEven++;
            
        }
        else
        {
            printf("Odd number :%d\n",Arr[iCnt]);
            iOdd++;
        }
        
        
    }
    return(iEven-iOdd);
    
}
#include<stdio.h>
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
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

    iRet=Frequency(p,iSize);
    printf("Difference between frquency of even and odd numbers : %d",iRet);
    

    free(p);

    return 0;



}
