//program to count even digit
#include<stdio.h>

int CheckEven(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=CheckEven(iValue);
	
	printf("Even count=%d\n",iRet);
	
	return 0;
}

int CheckEven(int iNo)
{
	int iCnt=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		if((iDigit%2)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}