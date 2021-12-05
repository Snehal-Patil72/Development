#include<stdio.h>
#include<stdlib.h>

void CheckDigit(int Brr[],int iSize)
{
int iCnt=0,i=0,temp=0;
printf("Check\n");
for(i=0;i<iSize;i++,iCnt=0)
{
temp=Brr[i];	
	while(Brr[i]!=0)
	{
		iCnt++;
		Brr[i]=Brr[i]/10;
		
	}
	if(iCnt==3)
	{
	printf("No=%d\t",temp);
	}

}

}
int main()
{
	int *ptr=NULL;
	int iLength=0, i=0;
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
	CheckDigit(ptr,iLength);
	 
		
	free(ptr);
	return 0;
}