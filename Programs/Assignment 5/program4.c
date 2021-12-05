//program to count no of 4 in digit

#include<stdio.h>

int CheckFour(int);

int main()
{
	int iValue=0;
	int bRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckFour(iValue);
	
	printf("count of four=%d",bRet);
		
	
	return 0;
}

int CheckFour(int iNo)
{
	int iDigit=0;
	int count=0;
	
	if(iNo==0)
	{
		return 0;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit==4) ||(iDigit==-4))
		{
			count++;
		}
		iNo=iNo/10;
	}
	return count;
}