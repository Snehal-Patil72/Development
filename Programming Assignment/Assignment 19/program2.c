#include<stdio.h>
#include<stdlib.h>

int CheckMax(int Brr[],int iSize)
{
	int i=0,iMax=Brr[0];
	
	for(i=1;i<iSize;i++)
	{
		if(Brr[i]<iMax)
		{
			iMax=Brr[i];
		}
	}
		return iMax;
	
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
	 iRet=CheckMax(ptr,iLength);
	 
	 printf("Smallest No = %d",iRet);
		
	free(ptr);
	return 0;
}