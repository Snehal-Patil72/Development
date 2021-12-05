#include<stdio.h>
#include<stdlib.h>

int CheckProduct(int Brr[],int iSize)
{
	int Mul=1,iCnt=0;
	int i=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Brr[i]%2)!=0)
		{
			Mul=Mul*Brr[i];
			iCnt++;
		}
	}
	if(iCnt!=0)
	{
		return Mul;
	}
	else
	{
		return 0;
	}
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
	 iRet=CheckProduct(ptr,iLength);
	 
         printf("Product = %d",iRet);
		
	free(ptr);
	return 0;
}