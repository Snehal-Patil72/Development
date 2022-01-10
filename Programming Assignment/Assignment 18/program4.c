#include<stdio.h>
#include<stdlib.h>

void CheckRange(int Arr[],int iSize,int iNo1,int iNo2)
{
int i=0;

printf("Element:");
for(i=0;i<iSize;i++)
{
	
	if(((Arr[i])>iNo1) && ((Arr[i])<iNo2))
	{
		printf("%d\t",Arr[i]);
	}
}

}
int main()
{
	int *ptr=NULL;
	int iLength,iValue1=0,iValue2=0, i=0;
     int iRet=0;	
    printf("Enter Total Number of Element\n");
	scanf("%d",&iLength);
	
	printf("Enter Start Range\n");
	scanf("%d",&iValue1);
	
	printf("Enter End Range\n");
	scanf("%d",&iValue2);
	
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
	 CheckRange(ptr,iLength,iValue1,iValue2);
	 //printf("%d",iRet);

		
	free(ptr);
	return 0;
}