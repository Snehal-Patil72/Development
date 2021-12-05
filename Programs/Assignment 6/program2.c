//program to count odd digits
#include<stdio.h>

int Checkodd(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=Checkodd(iValue);
	
	printf("count=%d",iRet);
	
	return 0;
}

int Checkodd(int iNo)
{
	int iDigit=0,iCnt=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}