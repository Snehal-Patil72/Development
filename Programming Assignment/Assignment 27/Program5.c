#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
UINT iMask=0x80000001;
UINT iResult=0;

iResult=(iMask&iNo);

if(iMask==iResult)
{
return true;
}
else
{
return false;
}	
	

}


int main()
{
	UINT iValue=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf(" bits are on");
	}
	else
	{
		printf("bits is off");
	}
	return 0;
}