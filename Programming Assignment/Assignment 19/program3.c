#include<stdio.h>
#include<stdlib.h>

int CheckDiff(int Brr[],int iSize)
{
	int i=0,iMax=Brr[0],iMin=Brr[0],iDiff=0;
	
	for(i=1;i<iSize;i++)
	{
		if(Brr[i]>iMax)
		{
			iMax=Brr[i];
		}
		else if(Brr[i]<iMin)
		{
			iMin=Brr[i];
		}
	
	}
	printf("Max=%d\n",iMax);
		printf("Min=%d\n",iMin);

	iDiff=iMax-iMin;
	
		return iDiff;
	
}
int main()
{
	int *ptr=NULL;
	int iLength=0, i=0;
     int iRet=0;	
    printf("Enter Total Number of Element\n");
	scanf("%d",&iLength);
	
	
	ptr=(int *)malloc(sizeof(int)*iLength);
	
	if(ptr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter Elements\n");
	for(i=0;i<iLength;i++)
	{
		printf("Enter %d Element",i+1);
		scanf("%d",&ptr[i]);
	}
	
	printf("Elements are\n");
     for(i=0;i<iLength;i++)
	 {
		 printf("%d\t",ptr[i]);
		 
	 }
	 
	 printf("\n");
	 iRet=CheckDiff(ptr,iLength);
	 
	 printf("Difference No = %d",iRet);
		
	free(ptr);
	return 0;
}