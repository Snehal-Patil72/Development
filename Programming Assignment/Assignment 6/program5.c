//find diff of even and odd
#include<stdio.h>

int CheckDiff(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
		//printf("%d",iValue);

	iRet=CheckDiff(iValue);
	
	printf("Difference=%d",iRet);
	
	return 0;
}

int CheckDiff(int iNo)
{
	int iDigit=0,iEsum=0,iOsum=0,iDiff=0;
	
	//printf("%d",iNo);
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
	iDigit=iNo%10;
	printf("%d\n",iDigit);
    if((iDigit%2)==0)
	{
     iEsum=iEsum+iDigit;
	}
  else	
  {
	  iOsum=iOsum+iDigit;
  }
  iNo=iNo/10;
	}	
		iDiff=iEsum-iOsum;
		
		return iDiff;
	
}