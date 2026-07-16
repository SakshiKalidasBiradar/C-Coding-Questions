//Accept N Numbers from user and Display all such elements which are Multiples of 11
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
  
    int iCnt = 0;
    int iCount = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0 )
        {
            printf(" Multiples of 11 : %d\t",Arr[iCnt]);
        }
        
    }
    
}
#include<stdio.h>
int main()
{
    int iSize = 0,iCnt = 0;
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

    Display(p,iSize);
    

    free(p);

    return 0;



}
