#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[],int iSize,int iNO)
{
	int i;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i])==iNO)
		{
			break;
		}
	}
	printf("value of i : %d\n",i);
	
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int *ptr=NULL;
	int iLength,iValue=0, i=0;
	bool bRet=false;
	
    printf("Enter Total Number of Element\n");
	scanf("%d",&iLength);
	
	printf("Enter value of no\n");
	scanf("%d",&iValue);
	
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
	 bRet=CheckNum(ptr,iLength,iValue);
	 
	 if(bRet==true)
	 {
		 printf("Number is present\n");
	 }
	 else
	 {
		 printf("Number is not present\n");
	 }
		
	free(ptr);
	return 0;
}