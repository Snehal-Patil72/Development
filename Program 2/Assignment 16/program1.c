#include<stdio.h>
#include<stdlib.h>
int Display(int Brr[],int iSize)
{
int iCnt=0;
int iEsum=0,iOsum=0,iDiff=0;

for(iCnt=0;iCnt<iSize;iCnt++)
{
	if((Brr[iCnt]%2)==0)
	{
		iEsum=iEsum+Brr[iCnt];
	}
	else
	{
		iOsum=iOsum+Brr[iCnt];
	}
}
iDiff=iEsum-iOsum;

return iDiff;

}

int main()
{
	int *p=NULL,iLength=0,iCnt=0,iRet=0;
	
	printf("Enter total element of  array\n");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength*sizeof(int));	
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d Element\n",iLength);
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		
		printf("Enter %d Element\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Display(p,iLength);
	
	printf("Difference=%d\n",iRet);
	
		
	
	return 0;
}