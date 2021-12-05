//program to check number contain zero or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int);

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	bRet=CheckZero(iValue);
	
	if(bRet==true)
	{
		printf("Number contain zero");
	}
	else
	{
		printf("Number contain  No zero");
	
	}
	
	return 0;
}


bool CheckZero(int iNo)
{
bool bZero=false;
int iDigit=0;


if(iNo==0)
{
	return true;
}

while(iNo!=0)
{
	iDigit=iNo%10;
	printf("%d\n",iDigit);
	if(iDigit==0)
	{
		bZero=true;
	}
	iNo=iNo/10;
}

return bZero;
}






