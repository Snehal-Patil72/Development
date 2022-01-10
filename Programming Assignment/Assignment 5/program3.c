//program to check frequency of 2

#include<stdio.h>

int CheckTwo(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=CheckTwo(iValue);
	
	printf("count of two=%d",iRet);
	
	return 0;
}

int CheckTwo(int iNo)
{
	int iDigit=0,iCnt=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		if((iDigit==2) || (iDigit==-2))
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}