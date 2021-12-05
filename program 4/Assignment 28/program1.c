#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Bit)
{
	UINT iMask=0x00000001;
	iMask=iMask<<(Bit-1);
	
	UINT iResult=0;
	iResult=iMask&No;
	
	if(iResult==iMask)
	{
	No=iMask^No;
	
	}
	else
	{
		printf("Bit is off\n");
	}
	
	return No;
}

int main()
{
	UINT iNo=0;
	UINT count=0;
	UINT iRet=0;
	printf("Enter the No\n");
	scanf("%d",&iNo);
	
	printf("Enter the bit to check\n");
	scanf("%d",&count);
	
	iRet=OffBit(iNo,count);
	
	printf("No after %d bit is off=%d",count,iRet);
	
	return 0;
	
}