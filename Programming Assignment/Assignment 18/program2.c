#include<stdio.h>
#include<stdlib.h>
int CheckOccurence(int Arr[],int iSize,int iNo)
{
	int i=0;
	
    for(i=0;i<iSize;i++)
	{
		if((Arr[i])==iNo)
		{

          break;
		}
	}
	
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i;
	}
}


int main()
{
	int *ptr=NULL;
	int iLength,iValue=0, i=0;
     int iRet=0;	
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
	 iRet=CheckOccurence(ptr,iLength,iValue);
	 
	 if(iRet==-1)
	 {
		 printf("Number is not present\n");
	 }
	 else
	 {
		 printf("Number is  present at Arr[%d] index\n",iRet);
	 }
		
	free(ptr);
	return 0;
}