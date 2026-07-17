//Accept N Numbers from user and  Accept another number from user and return frquency of No
#include<stdio.h>
#include<stdlib.h>

int CountNo(int Arr[],int iLength,int iNo)
{
  
    int iCnt = 0;
    int iCount = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {

            printf("Frequency of No :%d\n",Arr[iCnt]);
            iCount++;
        }      
        
    }
    return iCount;
    
}
#include<stdio.h>
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iNo = 0;
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

    printf("Enter Number You Want to Search :");
    scanf("%d",&iNo);

    iRet=CountNo(p,iSize,iNo);
    printf("Frequency is %d of %d",iRet,iNo);
    

    free(p);

    return 0;



}
