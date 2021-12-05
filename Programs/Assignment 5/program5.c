//program to count no less than 6
#include<stdio.h>

int CheckSix(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=CheckSix(iValue);
	
	printf("count of less than six=%d\n",iRet);
	
	return 0;
}

int CheckSix(int iNo)
{
	int iCnt=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}