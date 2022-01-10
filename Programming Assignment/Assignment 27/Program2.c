#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iBit1,UINT iBit2)
{
UINT iMask1=0x00000001;
UINT iMask2=0x00000001;

UINT iResult1=0;
UINT iResult2=0;

UINT fResult=0;
UINT fMask=0X00000000;

iMask1=iMask1<<(iBit1-1);
iMask2=iMask2<<(iBit2-1);

iResult1=(iMask1&iNo);
iResult2=(iMask2&iNo);

fMask=(iMask1|iMask2);
fResult=(iResult1|iResult2);

if(fMask==fResult)
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
	UINT iValue=0,iPos1=0,iPos2=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter bit 1 to check\n");
	scanf("%d",&iPos1);
	
	printf("Enter bit 2 to check\n");
	scanf("%d",&iPos2);
	
	bRet=CheckBit(iValue,iPos1,iPos2);
	
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