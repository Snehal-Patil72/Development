//count between 3 and 7
#include<stdio.h>

int CheckMul(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=CheckMul(iValue);
	
	printf("Mutiply=%d",iRet);
	
	return 0;
}


int CheckMul(int iNo)
{
	int iDigit=0,iMul=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit!=0)
		{
		iMul=iMul*iDigit;	
		}		
        iNo=iNo/10;		
	}
	return iMul;
}
