#include<stdio.h>
#include<stdlib.h>

void CheckDigit(int Brr[],int iSize)
{
int iCnt=0,i=0,iSum=0,iDigit=0;
printf("Check\n");
for(i=0;i<iSize;i++,iSum=0)
{
	while(Brr[i]!=0)
	{
	    iDigit=Brr[i]%10;
		iSum=iSum+iDigit;
		iCnt++;
		Brr[i]=Brr[i]/10;
		
	}
	printf("sum=%d\t",iSum);

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