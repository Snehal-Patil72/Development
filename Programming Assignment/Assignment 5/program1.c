//Display digit in reverse order

#include<stdio.h>

void DisplayReverse(int);

int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	
	return 0;
}

void DisplayReverse(int iNo)
{
	int iDigit=0;
	
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
	
}