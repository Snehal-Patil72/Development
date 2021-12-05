//count between 3 and 7
#include<stdio.h>

int CheckNum(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=CheckNum(iValue);
	
	printf("count=%d",iRet);
	
	return 0;
}


int CheckNum(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit>3)  && (iDigit<7))
		{
          iCnt++;
		}		
iNo=iNo/10;		
	}
	return iCnt;
}
